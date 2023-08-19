using System;
using System.Runtime.InteropServices;
using static SharpDfsTrigger.NativeMethods;

namespace SharpDfsTrigger
{

        public abstract class dfsapi
        {
            private byte[] MIDL_ProcFormatString;

            private byte[] MIDL_TypeFormatString;
            private GCHandle procString;
            private GCHandle formatString;
            private GCHandle stub;
            private GCHandle faultoffsets;
            private GCHandle clientinterface;
            private string PipeName;

            private allocmemory AllocateMemoryDelegate = AllocateMemory;
            private freememory FreeMemoryDelegate = FreeMemory;

            public UInt32 RPCTimeOut = 15000;

            protected void InitializeStub(Guid interfaceID, byte[] MIDL_ProcFormatString, byte[] MIDL_TypeFormatString, string pipe, ushort MajorVerson, ushort MinorVersion)
            {
                this.MIDL_ProcFormatString = MIDL_ProcFormatString;
                this.MIDL_TypeFormatString = MIDL_TypeFormatString;
                PipeName = pipe;
                procString = GCHandle.Alloc(this.MIDL_ProcFormatString, GCHandleType.Pinned);

                RPC_CLIENT_INTERFACE clientinterfaceObject = new RPC_CLIENT_INTERFACE(interfaceID, MajorVerson, MinorVersion);

                COMM_FAULT_OFFSETS commFaultOffset = new COMM_FAULT_OFFSETS();
                commFaultOffset.CommOffset = -1;
                commFaultOffset.FaultOffset = -1;
                faultoffsets = GCHandle.Alloc(commFaultOffset, GCHandleType.Pinned);
                clientinterface = GCHandle.Alloc(clientinterfaceObject, GCHandleType.Pinned);
                formatString = GCHandle.Alloc(MIDL_TypeFormatString, GCHandleType.Pinned);

                MIDL_STUB_DESC stubObject = new MIDL_STUB_DESC(formatString.AddrOfPinnedObject(),
                                                                clientinterface.AddrOfPinnedObject(),
                                                                Marshal.GetFunctionPointerForDelegate(AllocateMemoryDelegate),
                                                                Marshal.GetFunctionPointerForDelegate(FreeMemoryDelegate));

                stub = GCHandle.Alloc(stubObject, GCHandleType.Pinned);
            }

            protected void freeStub()
            {
                procString.Free();
                faultoffsets.Free();
                clientinterface.Free();
                formatString.Free();
                stub.Free();
            }

            private delegate IntPtr allocmemory(int size);

            protected static IntPtr AllocateMemory(int size)
            {
                IntPtr memory = Marshal.AllocHGlobal(size);
                return memory;
            }

            private delegate void freememory(IntPtr memory);

            protected static void FreeMemory(IntPtr memory)
            {
                Marshal.FreeHGlobal(memory);
            }

            //https://github.com/vletoux/pingcastle/blob/19a3890b214bff7cb66b08c55bb4983ca21c8bd1/RPC/rpcapi.cs#L224
            protected IntPtr Bind(IntPtr IntPtrserver, bool UseNullSession = false, string interfaceid = null)
            {
                string server = Marshal.PtrToStringUni(IntPtrserver);
                IntPtr bindingstring = IntPtr.Zero;
                IntPtr binding = IntPtr.Zero;
                Int32 status;

                status = RpcStringBindingCompose(interfaceid, "ncacn_np", server, PipeName, null, out bindingstring);
                if (status != 0)
                {
                    Console.WriteLine("[x]RpcStringBindingCompose failed with status 0x" + status.ToString("x"));
                    return IntPtr.Zero;
                }

                status = RpcBindingFromStringBinding(Marshal.PtrToStringUni(bindingstring), out binding);
                RpcBindingFree(ref bindingstring);
                if (status != 0)
                {
                    Console.WriteLine("[x]RpcBindingFromStringBinding failed with status 0x" + status.ToString("x"));
                    return IntPtr.Zero;
                }

                Console.WriteLine("[!]binding ok (handle=" + binding.ToString("x") + ")");

                return binding;
            }

            protected IntPtr GetProcStringHandle(int offset)
            {
                return Marshal.UnsafeAddrOfPinnedArrayElement(MIDL_ProcFormatString, offset);
            }

            protected IntPtr GetStubHandle()
            {
                return stub.AddrOfPinnedObject();
            }

            protected IntPtr CallNdrClientCall2x86(int offset, params IntPtr[] args)
            {
                GCHandle stackhandle = GCHandle.Alloc(args, GCHandleType.Pinned);
                IntPtr result;
                try
                {
                    result = NdrClientCall2x86(GetStubHandle(), GetProcStringHandle(offset), stackhandle.AddrOfPinnedObject());
                }
                finally
                {
                    stackhandle.Free();
                }
                return result;
            }
        }
    }

