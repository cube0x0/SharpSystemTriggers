using System;
using System.IO;
using System.Runtime.InteropServices;
using SharpDcomTrigger.Com;

namespace SharpDcomTrigger
{

    internal enum RUNLEVEL : uint
    {
        RUNLEVEL_LUA = 0x0,
        RUNLEVEL_HIGHEST = 0x1,
        RUNLEVEL_ADMIN = 0x2,
        RUNLEVEL_MAX_NON_UIA = 0x3,
        RUNLEVEL_LUA_UIA = 0x10,
        RUNLEVEL_HIGHEST_UIA = 0x11,
        RUNLEVEL_ADMIN_UIA = 0x12,
        RUNLEVEL_MAX = 0x13,
        INVALID_LUA_RUNLEVEL = 0xFFFFFFFF,
    };

    internal enum PRT
    {
        PRT_IGNORE = 0x0,
        PRT_CREATE_NEW = 0x1,
        PRT_USE_THIS = 0x2,
        PRT_USE_THIS_ONLY = 0x3,
    };

    [Guid("000001B9-0000-0000-c000-000000000046")]
    [InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    internal interface ISpecialSystemPropertiesActivator
    {
        void SetSessionId(int dwSessionId, int bUseConsole, int fRemoteThisSessionId);

        void GetSessionId(out int pdwSessionId, out int pbUseConsole);

        void GetSessionId2(out int pdwSessionId, out int pbUseConsole, out int pfRemoteThisSessionId);

        void SetClientImpersonating(int fClientImpersonating);

        void GetClientImpersonating(out int pfClientImpersonating);

        void SetPartitionId(ref Guid guidPartition);

        void GetPartitionId(out Guid pguidPartition);

        void SetProcessRequestType(PRT dwPRT);

        void GetProcessRequestType(out PRT pdwPRT);

        void SetOrigClsctx(int dwOrigClsctx);

        void GetOrigClsctx(out int pdwOrigClsctx);

        void GetDefaultAuthenticationLevel(out int pdwDefaultAuthnLvl);

        void SetDefaultAuthenticationLevel(int dwDefaultAuthnLvl);

        void GetLUARunLevel(out RUNLEVEL pdwLUARunLevel, out IntPtr phwnd);

        void SetLUARunLevel(RUNLEVEL dwLUARunLevel, IntPtr hwnd);
    }

    [Flags]
    public enum CLSCTX : uint
    {
        INPROC_SERVER = 0x1,
        INPROC_HANDLER = 0x2,
        LOCAL_SERVER = 0x4,
        INPROC_SERVER16 = 0x8,
        REMOTE_SERVER = 0x10,
        INPROC_HANDLER16 = 0x20,
        RESERVED1 = 0x40,
        RESERVED2 = 0x80,
        RESERVED3 = 0x100,
        RESERVED4 = 0x200,
        NO_CODE_DOWNLOAD = 0x400,
        RESERVED5 = 0x800,
        NO_CUSTOM_MARSHAL = 0x1000,
        ENABLE_CODE_DOWNLOAD = 0x2000,
        NO_FAILURE_LOG = 0x4000,
        DISABLE_AAA = 0x8000,
        ENABLE_AAA = 0x10000,
        FROM_DEFAULT_CONTEXT = 0x20000,
        ACTIVATE_32_BIT_SERVER = 0x40000,
        ACTIVATE_64_BIT_SERVER = 0x80000,
        ENABLE_CLOAKING = 0x100000,
        APPCONTAINER = 0x400000,
        ACTIVATE_AAA_AS_IU = 0x800000,
        ACTIVATE_NATIVE_SERVER = 0x1000000,
        ACTIVATE_ARM32_SERVER = 0x2000000,
        PS_DLL = 0x80000000,
        SERVER = INPROC_SERVER | LOCAL_SERVER | REMOTE_SERVER,
        ALL = INPROC_SERVER | INPROC_HANDLER | LOCAL_SERVER | REMOTE_SERVER
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct OptionalGuid : IDisposable
    {
        private IntPtr pGuid;

        void IDisposable.Dispose()
        {
            if (pGuid != IntPtr.Zero)
            {
                Marshal.FreeCoTaskMem(pGuid);
                pGuid = IntPtr.Zero;
            }
        }

        public OptionalGuid(Guid guid)
        {
            pGuid = Marshal.AllocCoTaskMem(16);
            Marshal.Copy(guid.ToByteArray(), 0, pGuid, 16);
        }
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct MULTI_QI : IDisposable
    {
        private OptionalGuid pIID;
        private IntPtr pItf;
        private int hr;

        public object GetObject()
        {
            if (pItf == IntPtr.Zero)
            {
                return null;
            }
            else
            {
                return Marshal.GetObjectForIUnknown(pItf);
            }
        }

        public IntPtr GetObjectPointer()
        {
            if (pItf != IntPtr.Zero)
            {
                Marshal.AddRef(pItf);
            }
            return pItf;
        }

        public int HResult()
        {
            return hr;
        }

        void IDisposable.Dispose()
        {
            ((IDisposable)pIID).Dispose();
            if (pItf != IntPtr.Zero)
            {
                Marshal.Release(pItf);
                pItf = IntPtr.Zero;
            }
        }

        public MULTI_QI(Guid iid)
        {
            pIID = new OptionalGuid(iid);
            pItf = IntPtr.Zero;
            hr = 0;
        }
    }

    [StructLayout(LayoutKind.Sequential)]
    public sealed class COSERVERINFO : IDisposable
    {
        private int dwReserved1;

        [MarshalAs(UnmanagedType.LPWStr)]
        private string pwszName;

        private IntPtr pAuthInfo;
        private int dwReserved2;

        void IDisposable.Dispose()
        {
            if (pAuthInfo != IntPtr.Zero)
            {
                Marshal.FreeCoTaskMem(pAuthInfo);
            }
        }

        public COSERVERINFO(string name)
        {
            pwszName = name;
        }
    }

    [Guid("000001B8-0000-0000-c000-000000000046")]
    [InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    public interface IStandardActivator
    {
        void StandardGetClassObject(in Guid rclsid, CLSCTX dwContext, [In] COSERVERINFO pServerInfo, in Guid riid, [MarshalAs(UnmanagedType.IUnknown)] out object ppvClassObj);

        void StandardCreateInstance(in Guid Clsid, IntPtr punkOuter, CLSCTX dwClsCtx, [In] COSERVERINFO pServerInfo, int dwCount, [In, Out][MarshalAs(UnmanagedType.LPArray)] MULTI_QI[] pResults);

        void StandardGetInstanceFromFile([In] COSERVERINFO pServerInfo, in Guid pclsidOverride,
            IntPtr punkOuter, CLSCTX dwClsCtx, int grfMode, [MarshalAs(UnmanagedType.LPWStr)] string pwszName, int dwCount, [In, Out][MarshalAs(UnmanagedType.LPArray)] MULTI_QI[] pResults);

        int StandardGetInstanceFromIStorage(
            [In] COSERVERINFO pServerInfo, 
            in Guid pclsidOverride,
            IntPtr punkOuter, 
            CLSCTX dwClsCtx, 
            IStorage pstg, 
            int dwCount, 
            [In, Out][MarshalAs(UnmanagedType.LPArray)] Ole32.MULTI_QI[] pResults);

        int StandardGetInstanceFromIStoragee(
            COSERVERINFO pServerInfo,
            ref Guid pclsidOverride,
            [MarshalAs(UnmanagedType.IUnknown)] object pUnkOuter,
            CLSCTX dwClsCtx,
            IStorage pstg,
            int dwCount,
            [In, Out][MarshalAs(UnmanagedType.LPArray)] Ole32.MULTI_QI[] pResults);

        void Reset();
    }

    [Flags]
    internal enum STGM
    {
        READ = 0x00000000,
        WRITE = 0x00000001,
        READWRITE = 0x00000002,
        SHARE_DENY_NONE = 0x00000040,
        SHARE_DENY_READ = 0x00000030,
        SHARE_DENY_WRITE = 0x00000020,
        SHARE_EXCLUSIVE = 0x00000010,
        PRIORITY = 0x00040000,
        CREATE = 0x00001000,
        CONVERT = 0x00020000,
        FAILIFTHERE = READ,
        DIRECT = READ,
        TRANSACTED = 0x00010000,
        NOSCRATCH = 0x00100000,
        NOSNAPSHOT = 0x00200000,
        SIMPLE = 0x08000000,
        DIRECT_SWMR = 0x00400000,
        DELETEONRELEASE = 0x04000000
    }

    internal enum STGFMT
    {
        Storage = 0,
        File = 3,
        Any = 4,
        Docfile = 5
    }

    [StructLayout(LayoutKind.Sequential)]
    internal class STGOPTIONS
    {
        public short usVersion;
        public short reserved;
        public int ulSectorSize;

        [MarshalAs(UnmanagedType.LPWStr)]
        public string pwcsTemplateFile;
    }
}