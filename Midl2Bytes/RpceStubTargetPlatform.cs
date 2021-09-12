using System;

namespace Midl2Bytes
{
    /// <summary>
    /// Target platform to build a RPC stub.
    /// If target platform doesn't match actually running system,
    /// program should throw an exception.
    /// </summary>
    [Flags]
    public enum RpceStubTargetPlatform
    {
        /// <summary>
        /// Target platform is x86.
        /// </summary>
        X86 = 1,

        /// <summary>
        /// Target platform is amd64.
        /// </summary>
        Amd64 = 2
    }
}