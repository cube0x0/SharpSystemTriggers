using System;
using System.Runtime.InteropServices;
using System.Security.Permissions;

namespace SharpSpoolTrigger
{
    //https://raw.githubusercontent.com/vletoux/pingcastle/19a3890b214bff7cb66b08c55bb4983ca21c8bd1/RPC/nativemethods.cs
    public class NativeMethods
    {
        [DllImport("Rpcrt4.dll", EntryPoint = "RpcBindingFromStringBindingW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern Int32 RpcBindingFromStringBinding(String bindingString, out IntPtr lpBinding);

        [DllImport("Rpcrt4.dll", EntryPoint = "RpcBindingFree", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern Int32 RpcBindingFree(ref IntPtr lpString);

        [DllImport("Rpcrt4.dll", EntryPoint = "RpcStringBindingComposeW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern Int32 RpcStringBindingCompose(String ObjUuid, String ProtSeq, String NetworkAddr, String Endpoint, String Options, out IntPtr lpBindingString);

        [DllImport("Rpcrt4.dll", EntryPoint = "NdrClientCall2", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern IntPtr NdrClientCall2x86(IntPtr pMIDL_STUB_DESC, IntPtr formatString, IntPtr args);

        [DllImport("Rpcrt4.dll", EntryPoint = "RpcBindingSetOption", CallingConvention = CallingConvention.StdCall, SetLastError = false)]
        internal static extern Int32 RpcBindingSetOption(IntPtr Binding, UInt32 Option, IntPtr OptionValue);

        [DllImport("Rpcrt4.dll", EntryPoint = "NdrClientCall2", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern IntPtr NdrClientCall2x64(IntPtr pMIDL_STUB_DESC, IntPtr formatString, IntPtr binding, ref IntPtr Handle);

        [DllImport("Rpcrt4.dll", EntryPoint = "NdrClientCall2", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern IntPtr NdrClientCall2x64(IntPtr pMIDL_STUB_DESC, IntPtr formatString, ref IntPtr Handle);

        [DllImport("Rpcrt4.dll", EntryPoint = "NdrClientCall2", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern IntPtr NdrClientCall2x64(IntPtr pMIDL_STUB_DESC, IntPtr formatString, IntPtr binding, string pPrinterName, out IntPtr pHandle, string pDatatype, ref DEVMODE_CONTAINER pDevModeContainer, int AccessRequired);

        [DllImport("Rpcrt4.dll", EntryPoint = "NdrClientCall2", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern IntPtr NdrClientCall2x64(IntPtr pMIDL_STUB_DESC, IntPtr formatString, string pPrinterName, out IntPtr pHandle, string pDatatype, ref DEVMODE_CONTAINER pDevModeContainer, int AccessRequired);

        [DllImport("Rpcrt4.dll", EntryPoint = "NdrClientCall2", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern IntPtr NdrClientCall2x64(IntPtr pMIDL_STUB_DESC, IntPtr formatString, IntPtr binding, IntPtr hPrinter, uint fdwFlags, uint fdwOptions, string pszLocalMachine, uint dwPrinterLocal, IntPtr intPtr3);

        [DllImport("Rpcrt4.dll", EntryPoint = "NdrClientCall2", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern IntPtr NdrClientCall2x64(IntPtr pMIDL_STUB_DESC, IntPtr formatString, IntPtr hPrinter, uint fdwFlags, uint fdwOptions, string pszLocalMachine, uint dwPrinterLocal, IntPtr intPtr3);

        [DllImport("Rpcrt4.dll", EntryPoint = "RpcBindingSetAuthInfoW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern Int32 RpcBindingSetAuthInfo(IntPtr Binding, String ServerPrincName, UInt32 AuthnLevel, UInt32 AuthnSvc, IntPtr identity, uint AuthzSvc);

        [DllImport("Rpcrt4.dll", EntryPoint = "RpcBindingSetAuthInfoExW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern Int32 RpcBindingSetAuthInfoEx(IntPtr lpBinding, string ServerPrincName, UInt32 AuthnLevel, UInt32 AuthnSvc, ref SEC_WINNT_AUTH_IDENTITY AuthIdentity, UInt32 AuthzSvc, ref RPC_SECURITY_QOS SecurityQOS);

        [DllImport("Rpcrt4.dll", EntryPoint = "RpcBindingSetAuthInfoW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern Int32 RpcBindingSetAuthInfo(IntPtr lpBinding, string ServerPrincName, UInt32 AuthnLevel, UInt32 AuthnSvc, ref SEC_WINNT_AUTH_IDENTITY AuthIdentity, UInt32 AuthzSvc);

        [DllImport("Rpcrt4.dll", EntryPoint = "RpcBindingSetAuthInfoW", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern Int32 RpcBindingSetAuthInfo(IntPtr lpBinding, string ServerPrincName, UInt32 AuthnLevel, UInt32 AuthnSvc, UIntPtr pointer, UInt32 AuthzSvc);

        [DllImport("Rpcrt4.dll", EntryPoint = "RpcBindingSetOption", CallingConvention = CallingConvention.StdCall, SetLastError = false)]
        internal static extern Int32 RpcBindingSetOption(IntPtr Binding, UInt32 Option, UInt32 OptionValue);

        [DllImport("Rpcrt4.dll", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode, SetLastError = false)]
        internal static extern Int32 RpcEpResolveBinding(IntPtr Binding, IntPtr RpcClientInterface);

        [DllImport("advapi32.dll", SetLastError = true)]
        internal static extern IntPtr GetSidSubAuthority(IntPtr sid, UInt32 subAuthorityIndex);

        [DllImport("advapi32.dll", SetLastError = true)]
        internal static extern IntPtr GetSidSubAuthorityCount(IntPtr psid);

        //structs
        [SecurityPermission(SecurityAction.LinkDemand, Flags = SecurityPermissionFlag.UnmanagedCode)]
        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
        public struct DEVMODE_CONTAINER
        {
            private Int32 cbBuf;
            private IntPtr pDevMode;
        }

        [SecurityPermission(SecurityAction.LinkDemand, Flags = SecurityPermissionFlag.UnmanagedCode)]
        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
        public struct RPC_V2_NOTIFY_OPTIONS_TYPE
        {
            private UInt16 Type;
            private UInt16 Reserved0;
            private UInt32 Reserved1;
            private UInt32 Reserved2;
            private UInt32 Count;
            private IntPtr pFields;
        };

        [SecurityPermission(SecurityAction.LinkDemand, Flags = SecurityPermissionFlag.UnmanagedCode)]
        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
        public struct RPC_V2_NOTIFY_OPTIONS
        {
            private UInt32 Version;
            private UInt32 Reserved;
            private UInt32 Count;
            /* [unique][size_is] */
            private RPC_V2_NOTIFY_OPTIONS_TYPE pTypes;
        };

        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
        internal struct SEC_WINNT_AUTH_IDENTITY
        {
            [MarshalAs(UnmanagedType.LPWStr)]
            public string User;

            public int UserLength;

            [MarshalAs(UnmanagedType.LPWStr)]
            public string Domain;

            public int DomainLength;

            [MarshalAs(UnmanagedType.LPWStr)]
            public string Password;

            public int PasswordLength;
            public int Flags;
        };

        [StructLayout(LayoutKind.Sequential)]
        public struct RPC_SECURITY_QOS
        {
            public Int32 Version;
            public Int32 Capabilities;
            public Int32 IdentityTracking;
            public Int32 ImpersonationType;
        };
    }
}