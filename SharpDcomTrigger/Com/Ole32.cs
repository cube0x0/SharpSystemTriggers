using System;
using System.Runtime.InteropServices;

namespace SharpDcomTrigger.Com
{
    public static class Ole32 {

        [Flags]
        public enum CLSCTX : uint {
            CLSCTX_INPROC_SERVER = 0x1,
            CLSCTX_INPROC_HANDLER = 0x2,
            CLSCTX_LOCAL_SERVER = 0x4,
            CLSCTX_INPROC_SERVER16 = 0x8,
            CLSCTX_REMOTE_SERVER = 0x10,
            CLSCTX_INPROC_HANDLER16 = 0x20,
            CLSCTX_RESERVED1 = 0x40,
            CLSCTX_RESERVED2 = 0x80,
            CLSCTX_RESERVED3 = 0x100,
            CLSCTX_RESERVED4 = 0x200,
            CLSCTX_NO_CODE_DOWNLOAD = 0x400,
            CLSCTX_RESERVED5 = 0x800,
            CLSCTX_NO_CUSTOM_MARSHAL = 0x1000,
            CLSCTX_ENABLE_CODE_DOWNLOAD = 0x2000,
            CLSCTX_NO_FAILURE_LOG = 0x4000,
            CLSCTX_DISABLE_AAA = 0x8000,
            CLSCTX_ENABLE_AAA = 0x10000,
            CLSCTX_FROM_DEFAULT_CONTEXT = 0x20000,
            CLSCTX_ACTIVATE_32_BIT_SERVER = 0x40000,
            CLSCTX_ACTIVATE_64_BIT_SERVER = 0x80000,
            CLSCTX_INPROC = CLSCTX_INPROC_SERVER | CLSCTX_INPROC_HANDLER,
            CLSCTX_SERVER = CLSCTX_INPROC_SERVER | CLSCTX_LOCAL_SERVER | CLSCTX_REMOTE_SERVER,
            CLSCTX_ALL = CLSCTX_SERVER | CLSCTX_INPROC_HANDLER
        }

        [Flags]
        public enum STGM : int {
            DIRECT = 0x00000000,
            TRANSACTED = 0x00010000,
            SIMPLE = 0x08000000,
            READ = 0x00000000,
            WRITE = 0x00000001,
            READWRITE = 0x00000002,
            SHARE_DENY_NONE = 0x00000040,
            SHARE_DENY_READ = 0x00000030,
            SHARE_DENY_WRITE = 0x00000020,
            SHARE_EXCLUSIVE = 0x00000010,
            PRIORITY = 0x00040000,
            DELETEONRELEASE = 0x04000000,
            NOSCRATCH = 0x00100000,
            CREATE = 0x00001000,
            CONVERT = 0x00020000,
            FAILIFTHERE = 0x00000000,
            NOSNAPSHOT = 0x00200000,
            DIRECT_SWMR = 0x00400000,
        }

        public static IntPtr GuidToPointer(Guid g) {
            IntPtr ret = Marshal.AllocCoTaskMem(16);
            Marshal.Copy(g.ToByteArray(), 0, ret, 16);
            return ret;
        }

        public static Guid IID_IUnknown = new Guid("{00000000-0000-0000-C000-000000000046}");
        public static IntPtr IID_IUnknownPtr = GuidToPointer(IID_IUnknown);

        [StructLayout(LayoutKind.Sequential)]
        public struct MULTI_QI {
            public IntPtr pIID;
            [MarshalAs(UnmanagedType.Interface)]
            public object pItf;
            public int hr;
        }

        [StructLayout(LayoutKind.Sequential)]
        public class COSERVERINFO {
            public uint dwReserved1;
            [MarshalAs(UnmanagedType.LPWStr)]
            public string pwszName;
            public IntPtr pAuthInfo;
            public uint dwReserved2;
        }

        [StructLayout(LayoutKind.Sequential)]
        public struct SOLE_AUTHENTICATION_SERVICE
        {
            public int dwAuthnSvc;
            public int dwAuthzSvc;
            [MarshalAs(UnmanagedType.BStr)] public string pPrincipalName;
            public int hr;
        }

        public enum EOLE_AUTHENTICATION_CAPABILITIES
        {
            EOAC_NONE = 0,
            EOAC_MUTUAL_AUTH = 0x1,
            EOAC_STATIC_CLOAKING = 0x20,
            EOAC_DYNAMIC_CLOAKING = 0x40,
            EOAC_ANY_AUTHORITY = 0x80,
            EOAC_MAKE_FULLSIC = 0x100,
            EOAC_DEFAULT = 0x800,
            EOAC_SECURE_REFS = 0x2,
            EOAC_ACCESS_CONTROL = 0x4,
            EOAC_APPID = 0x8,
            EOAC_DYNAMIC = 0x10,
            EOAC_REQUIRE_FULLSIC = 0x200,
            EOAC_AUTO_IMPERSONATE = 0x400,
            EOAC_NO_CUSTOM_MARSHAL = 0x2000,
            EOAC_DISABLE_AAA = 0x1000
        }

        public enum AuthnLevel
        {
            RPC_C_AUTHN_LEVEL_DEFAULT = 0,
            RPC_C_AUTHN_LEVEL_NONE = 1,
            RPC_C_AUTHN_LEVEL_CONNECT = 2,
            RPC_C_AUTHN_LEVEL_CALL = 3,
            RPC_C_AUTHN_LEVEL_PKT = 4,
            RPC_C_AUTHN_LEVEL_PKT_INTEGRITY = 5,
            RPC_C_AUTHN_LEVEL_PKT_PRIVACY = 6
        }

        public enum ImpLevel
        {
            RPC_C_IMP_LEVEL_DEFAULT = 0,
            RPC_C_IMP_LEVEL_ANONYMOUS = 1,
            RPC_C_IMP_LEVEL_IDENTIFY = 2,
            RPC_C_IMP_LEVEL_IMPERSONATE = 3,
            RPC_C_IMP_LEVEL_DELEGATE = 4,
        }

        [DllImport("ole32.dll")]
        public static extern int CoInitializeSecurity(
            IntPtr pSecDesc,
            int cAuthSvc,
            IntPtr asAuthSvc,
            IntPtr pReserved1,
            AuthnLevel dwAuthnLevel,
            ImpLevel dwImpLevel,
            IntPtr pAuthList,
            EOLE_AUTHENTICATION_CAPABILITIES dwCapabilities,
            IntPtr pReserved3
        );


        [DllImport("ole32.dll", PreserveSig = false, ExactSpelling = true)]
        public static extern int CreateILockBytesOnHGlobal(
                 IntPtr hGlobal,
                 [MarshalAs(UnmanagedType.Bool)] bool fDeleteOnRelease,
                 out ILockBytes ppLkbyt);

        [DllImport("ole32.dll", PreserveSig = false, ExactSpelling = true)]
        public static extern int StgCreateDocfileOnILockBytes(
                   ILockBytes plkbyt,
                   STGM grfMode,
                   uint reserved,
                   out IStorage ppstgOpen);

        [DllImport("ole32.dll", PreserveSig = false, ExactSpelling = true)]
        public static extern int CoGetInstanceFromIStorage(
                   COSERVERINFO pServerInfo, 
                   ref Guid pclsid,
                   [MarshalAs(UnmanagedType.IUnknown)] object pUnkOuter, 
                   CLSCTX dwClsCtx,
                   IStorage pstg, 
                   uint cmq, 
                   [In, Out] MULTI_QI[] rgmqResults);

        public enum CoCreateReturn : uint
        {
            S_OK = 0x00000000,      //Operation successful
            E_NOTIMPL = 0x80004001,      //Not implemented
            E_NOINTERFACE = 0x80004002,       //No such interface supported
            E_POINTER = 0x80004003,       //Pointer that is not valid
            E_ABORT = 0x80004004,     //Operation aborted
            E_FAIL = 0x80004005,      //Unspecified failure
            E_UNEXPECTED = 0x8000FFFF,       //Unexpected failure
            E_ACCESSDENIED = 0x80070005,       //General access denied error
            E_HANDLE = 0x80070006,       //Handle that is not valid
            E_OUTOFMEMORY = 0x8007000E,       //Failed to allocate necessary memory
            E_INVALIDARG = 0x80070057,       //One or more arguments are not valid
            E_CLASSNOTREG = 0x80040154      // Class not registered
        }

        [DllImport("ole32.Dll")]
        static public extern uint CoCreateInstance(ref Guid clsid,
           [MarshalAs(UnmanagedType.IUnknown)] object inner,
           uint context,
           ref Guid uuid,
           [MarshalAs(UnmanagedType.IUnknown)] out object rReturnedComObject);

        [DllImport("ole32.dll", CharSet = CharSet.Unicode, ExactSpelling = true, PreserveSig = false)]
        public static extern int CoCreateInstance(
                [In, MarshalAs(UnmanagedType.LPStruct)] Guid rclsid,
                [MarshalAs(UnmanagedType.IUnknown)] object pUnkOuter,
                CLSCTX dwClsContext,
                [In, MarshalAs(UnmanagedType.LPStruct)] Guid riid,
                [MarshalAs(UnmanagedType.IUnknown)] out object rReturnedComObject
                );
    }
}
