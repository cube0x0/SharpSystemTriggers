

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ms-efs.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>
#include "ms-efs.h"

#define TYPE_FORMAT_STRING_SIZE   479                               
#define PROC_FORMAT_STRING_SIZE   1043                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Defs_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Defs_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Defs_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Defs_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Defs_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Defs_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
static unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, pObject);\
}\
static unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, pObject);\
}\
static unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, pObject);\
}\
static void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
static unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, pObject);\
}\
static unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, pObject);\
}\
static unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, pObject);\
}\
static void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#endif

extern const ms2Defs_MIDL_TYPE_FORMAT_STRING ms2Defs__MIDL_TypeFormatString;
extern const ms2Defs_MIDL_PROC_FORMAT_STRING ms2Defs__MIDL_ProcFormatString;
extern const ms2Defs_MIDL_EXPR_FORMAT_STRING ms2Defs__MIDL_ExprFormatString;

/* Standard interface: efsrpc, ver. 1.0,
   GUID={0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}} */


extern const MIDL_SERVER_INFO efsrpc_ServerInfo;

extern const RPC_DISPATCH_TABLE efsrpc_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE efsrpc___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&efsrpc_v1_0_DispatchTable,
    0,
    0,
    0,
    &efsrpc_ServerInfo,
    0x04000001
    };
RPC_IF_HANDLE efsrpc_v1_0_s_ifspec = (RPC_IF_HANDLE)& efsrpc___RpcServerInterface;

extern const MIDL_STUB_DESC efsrpc_StubDesc;

extern const NDR_RUNDOWN RundownRoutines[];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ms2Defs_MIDL_PROC_FORMAT_STRING ms2Defs__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure EfsRpcOpenFileRaw */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 28 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter FileName */

/* 34 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Flags */

/* 40 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 42 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 44 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 46 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 48 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 50 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcReadFileRaw */

/* 52 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 54 */	NdrFcLong( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x1 ),	/* 1 */
/* 60 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 62 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 64 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 66 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 68 */	NdrFcShort( 0x24 ),	/* 36 */
/* 70 */	NdrFcShort( 0x8 ),	/* 8 */
/* 72 */	0x4c,		/* Oi2 Flags:  has return, has pipes, has ext, */
			0x3,		/* 3 */
/* 74 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 82 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 84 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 86 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter EfsOutPipe */

/* 88 */	NdrFcShort( 0x4114 ),	/* Flags:  pipe, out, simple ref, srv alloc size=16 */
/* 90 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 92 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 94 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 96 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 98 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcWriteFileRaw */

/* 100 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x2 ),	/* 2 */
/* 108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 110 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 112 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 114 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0x24 ),	/* 36 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	0x4c,		/* Oi2 Flags:  has return, has pipes, has ext, */
			0x3,		/* 3 */
/* 122 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 130 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 134 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter EfsInPipe */

/* 136 */	NdrFcShort( 0x10c ),	/* Flags:  pipe, in, simple ref, */
/* 138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 140 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcCloseRaw */

/* 148 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x3 ),	/* 3 */
/* 156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 158 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 160 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 162 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 164 */	NdrFcShort( 0x38 ),	/* 56 */
/* 166 */	NdrFcShort( 0x38 ),	/* 56 */
/* 168 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 170 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 178 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 180 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 182 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Procedure EfsRpcEncryptFileSrv */

/* 184 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 194 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 202 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 204 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 212 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 216 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcDecryptFileSrv */

/* 224 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x5 ),	/* 5 */
/* 232 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 234 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 244 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 252 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter OpenFlag */

/* 258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcQueryUsersOnFile */

/* 270 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x6 ),	/* 6 */
/* 278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 280 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 282 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 288 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 290 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 298 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 302 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Users */

/* 304 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 308 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcQueryRecoveryAgents */

/* 316 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x7 ),	/* 7 */
/* 324 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 326 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 334 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 336 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 344 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 348 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter RecoveryAgents */

/* 350 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 354 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcRemoveUsersFromFile */

/* 362 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 370 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 372 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 382 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 390 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 394 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Users */

/* 396 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 400 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcAddUsersToFile */

/* 408 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x9 ),	/* 9 */
/* 416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 418 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 426 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 428 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 436 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 440 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EncryptionCertificates */

/* 442 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 446 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum10NotUsedOnWire */

/* 454 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0xa ),	/* 10 */
/* 462 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 464 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 474 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure EfsRpcNotSupported */

/* 482 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0xb ),	/* 11 */
/* 490 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 492 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 496 */	NdrFcShort( 0x18 ),	/* 24 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 502 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Reserved1 */

/* 510 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Reserved2 */

/* 516 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter dwReserved1 */

/* 522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwReserved2 */

/* 528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 534 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 536 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 538 */	NdrFcShort( 0x184 ),	/* Type Offset=388 */

	/* Parameter bReserved */

/* 540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 542 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 548 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFileKeyInfo */

/* 552 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0xc ),	/* 12 */
/* 560 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 562 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 564 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 570 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 572 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 580 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 584 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InfoClass */

/* 586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter KeyInfo */

/* 592 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 594 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 596 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 600 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcDuplicateEncryptionInfoFile */

/* 604 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0xd ),	/* 13 */
/* 612 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 614 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 618 */	NdrFcShort( 0x18 ),	/* 24 */
/* 620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 622 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 624 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SrcFileName */

/* 632 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 636 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter DestFileName */

/* 638 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 642 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter dwCreationDisposition */

/* 644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 646 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwAttributes */

/* 650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 652 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RelativeSD */

/* 656 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 658 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 660 */	NdrFcShort( 0x184 ),	/* Type Offset=388 */

	/* Parameter bInheritHandle */

/* 662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 664 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 670 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum14NotUsedOnWire */

/* 674 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0xe ),	/* 14 */
/* 682 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 684 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 694 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure EfsRpcAddUsersToFileEx */

/* 702 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0xf ),	/* 15 */
/* 710 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 712 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 714 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 720 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 722 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x1 ),	/* 1 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFlags */

/* 730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 732 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 736 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 738 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 740 */	NdrFcShort( 0x184 ),	/* Type Offset=388 */

	/* Parameter FileName */

/* 742 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 744 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 746 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EncryptionCertificates */

/* 748 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 750 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 752 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 756 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFileKeyInfoEx */

/* 760 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x10 ),	/* 16 */
/* 768 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 770 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 774 */	NdrFcShort( 0x10 ),	/* 16 */
/* 776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 778 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 780 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 784 */	NdrFcShort( 0x1 ),	/* 1 */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFileKeyInfoFlags */

/* 788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 790 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 794 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 796 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 798 */	NdrFcShort( 0x184 ),	/* Type Offset=388 */

	/* Parameter FileName */

/* 800 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 804 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InfoClass */

/* 806 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 808 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter KeyInfo */

/* 812 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 814 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 816 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 820 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum17NotUsedOnWire */

/* 824 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x11 ),	/* 17 */
/* 832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 834 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 844 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure EfsRpcGetEncryptedFileMetadata */

/* 852 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x12 ),	/* 18 */
/* 860 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 862 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 864 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 870 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 872 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 874 */	NdrFcShort( 0x1 ),	/* 1 */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 880 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 882 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 884 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EfsStreamBlob */

/* 886 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 888 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 890 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 894 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcSetEncryptedFileMetadata */

/* 898 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x13 ),	/* 19 */
/* 906 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 908 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 916 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 918 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x1 ),	/* 1 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 926 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 930 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter OldEfsStreamBlob */

/* 932 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 936 */	NdrFcShort( 0x184 ),	/* Type Offset=388 */

	/* Parameter NewEfsStreamBlob */

/* 938 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 942 */	NdrFcShort( 0x192 ),	/* Type Offset=402 */

	/* Parameter NewEfsSignature */

/* 944 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 946 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 948 */	NdrFcShort( 0x1ac ),	/* Type Offset=428 */

	/* Return value */

/* 950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 952 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFlushEfsCache */

/* 956 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x14 ),	/* 20 */
/* 964 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 966 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 974 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 976 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 986 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcEncryptFileExSrv */

/* 990 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x15 ),	/* 21 */
/* 998 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1000 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1002 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1008 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1010 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 1018 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1020 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1022 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ProtectorDescriptor */

/* 1024 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1026 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1028 */	NdrFcShort( 0x1da ),	/* Type Offset=474 */

	/* Parameter Flags */

/* 1030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1032 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1036 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1038 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Defs_MIDL_TYPE_FORMAT_STRING ms2Defs__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/*  8 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 10 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 12 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 14 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 16 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 18 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 20 */	NdrFcShort( 0x4 ),	/* Offset= 4 (24) */
/* 22 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 24 */	0xb5,		/* FC_PIPE */
			0x0,		/* 0 */
/* 26 */	NdrFcShort( 0xfffc ),	/* Offset= -4 (22) */
/* 28 */	NdrFcShort( 0x1 ),	/* 1 */
/* 30 */	NdrFcShort( 0x1 ),	/* 1 */
/* 32 */	
			0x11, 0x0,	/* FC_RP */
/* 34 */	NdrFcShort( 0x4 ),	/* Offset= 4 (38) */
/* 36 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 38 */	0xb5,		/* FC_PIPE */
			0x0,		/* 0 */
/* 40 */	NdrFcShort( 0xfffc ),	/* Offset= -4 (36) */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	NdrFcShort( 0x1 ),	/* 1 */
/* 46 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 52 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 54 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 56 */	NdrFcShort( 0x2 ),	/* Offset= 2 (58) */
/* 58 */	
			0x12, 0x0,	/* FC_UP */
/* 60 */	NdrFcShort( 0xa8 ),	/* Offset= 168 (228) */
/* 62 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 64 */	NdrFcLong( 0x0 ),	/* 0 */
/* 68 */	NdrFcLong( 0x1f4 ),	/* 500 */
/* 72 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 74 */	NdrFcShort( 0x6 ),	/* 6 */
/* 76 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 78 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 80 */	NdrFcShort( 0x6 ),	/* 6 */
/* 82 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 84 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (72) */
/* 86 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 88 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 90 */	NdrFcShort( 0x4 ),	/* 4 */
/* 92 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 94 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 96 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 98 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 100 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (88) */
/* 106 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 108 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 110 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (78) */
/* 112 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 114 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcLong( 0x64 ),	/* 100 */
/* 124 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 128 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 134 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 136 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x8 ),	/* Offset= 8 (150) */
/* 144 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (114) */
/* 148 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 150 */	
			0x12, 0x0,	/* FC_UP */
/* 152 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (124) */
/* 154 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 156 */	NdrFcShort( 0x10 ),	/* 16 */
/* 158 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 160 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 162 */	NdrFcShort( 0x4 ),	/* 4 */
/* 164 */	NdrFcShort( 0x4 ),	/* 4 */
/* 166 */	0x12, 0x0,	/* FC_UP */
/* 168 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (100) */
/* 170 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 176 */	0x12, 0x0,	/* FC_UP */
/* 178 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (136) */
/* 180 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 182 */	NdrFcShort( 0xc ),	/* 12 */
/* 184 */	NdrFcShort( 0xc ),	/* 12 */
/* 186 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 188 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 190 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 192 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 194 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 196 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 206 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 208 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 210 */	NdrFcShort( 0x4 ),	/* 4 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	0x12, 0x0,	/* FC_UP */
/* 222 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (154) */
/* 224 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 226 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 228 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x8 ),	/* Offset= 8 (242) */
/* 236 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 238 */	NdrFcShort( 0xff50 ),	/* Offset= -176 (62) */
/* 240 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 242 */	
			0x12, 0x0,	/* FC_UP */
/* 244 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (196) */
/* 246 */	
			0x11, 0x0,	/* FC_RP */
/* 248 */	NdrFcShort( 0xffec ),	/* Offset= -20 (228) */
/* 250 */	
			0x11, 0x0,	/* FC_RP */
/* 252 */	NdrFcShort( 0x76 ),	/* Offset= 118 (370) */
/* 254 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 260 */	NdrFcLong( 0x1f4 ),	/* 500 */
/* 264 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 274 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 276 */	NdrFcShort( 0x1 ),	/* 1 */
/* 278 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 280 */	NdrFcShort( 0x4 ),	/* 4 */
/* 282 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 284 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 286 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 288 */	NdrFcShort( 0xc ),	/* 12 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0xa ),	/* Offset= 10 (302) */
/* 294 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 296 */	0x0,		/* 0 */
			NdrFcShort( 0xffdf ),	/* Offset= -33 (264) */
			0x36,		/* FC_POINTER */
/* 300 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 302 */	
			0x12, 0x0,	/* FC_UP */
/* 304 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (274) */
/* 306 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 308 */	NdrFcShort( 0xc ),	/* 12 */
/* 310 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 312 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 314 */	NdrFcShort( 0x4 ),	/* 4 */
/* 316 */	NdrFcShort( 0x4 ),	/* 4 */
/* 318 */	0x12, 0x0,	/* FC_UP */
/* 320 */	NdrFcShort( 0xff24 ),	/* Offset= -220 (100) */
/* 322 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	0x12, 0x0,	/* FC_UP */
/* 330 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (286) */
/* 332 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 334 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 336 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 338 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 340 */	NdrFcShort( 0x4 ),	/* 4 */
/* 342 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 348 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 350 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 352 */	NdrFcShort( 0x4 ),	/* 4 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	0x12, 0x0,	/* FC_UP */
/* 364 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (306) */
/* 366 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 368 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 370 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x8 ),	/* Offset= 8 (384) */
/* 378 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 380 */	NdrFcShort( 0xff82 ),	/* Offset= -126 (254) */
/* 382 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 384 */	
			0x12, 0x0,	/* FC_UP */
/* 386 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (338) */
/* 388 */	
			0x12, 0x0,	/* FC_UP */
/* 390 */	NdrFcShort( 0xc ),	/* Offset= 12 (402) */
/* 392 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 398 */	NdrFcLong( 0x41000 ),	/* 266240 */
/* 402 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x8 ),	/* Offset= 8 (416) */
/* 410 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 412 */	NdrFcShort( 0xffec ),	/* Offset= -20 (392) */
/* 414 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 416 */	
			0x12, 0x0,	/* FC_UP */
/* 418 */	NdrFcShort( 0xfeda ),	/* Offset= -294 (124) */
/* 420 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 422 */	NdrFcShort( 0xffde ),	/* Offset= -34 (388) */
/* 424 */	
			0x11, 0x0,	/* FC_RP */
/* 426 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (402) */
/* 428 */	
			0x12, 0x0,	/* FC_UP */
/* 430 */	NdrFcShort( 0x2 ),	/* Offset= 2 (432) */
/* 432 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 434 */	NdrFcShort( 0x10 ),	/* 16 */
/* 436 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 438 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 440 */	NdrFcShort( 0x4 ),	/* 4 */
/* 442 */	NdrFcShort( 0x4 ),	/* 4 */
/* 444 */	0x12, 0x0,	/* FC_UP */
/* 446 */	NdrFcShort( 0xff26 ),	/* Offset= -218 (228) */
/* 448 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 454 */	0x12, 0x0,	/* FC_UP */
/* 456 */	NdrFcShort( 0xff6a ),	/* Offset= -150 (306) */
/* 458 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 460 */	NdrFcShort( 0xc ),	/* 12 */
/* 462 */	NdrFcShort( 0xc ),	/* 12 */
/* 464 */	0x12, 0x0,	/* FC_UP */
/* 466 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (402) */
/* 468 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 470 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 472 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 474 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 476 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    PEXIMPORT_CONTEXT_HANDLE_rundown
    };


static const unsigned short efsrpc_FormatStringOffsetTable[] =
    {
    0,
    52,
    100,
    148,
    184,
    224,
    270,
    316,
    362,
    408,
    454,
    482,
    552,
    604,
    674,
    702,
    760,
    824,
    852,
    898,
    956,
    990
    };


static const MIDL_STUB_DESC efsrpc_StubDesc = 
    {
    (void *)& efsrpc___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    0,
    0,
    ms2Defs__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x8010272, /* MIDL Version 8.1.626 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

static const RPC_DISPATCH_FUNCTION efsrpc_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE efsrpc_v1_0_DispatchTable = 
    {
    22,
    (RPC_DISPATCH_FUNCTION*)efsrpc_table
    };

static const SERVER_ROUTINE efsrpc_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)EfsRpcOpenFileRaw,
    (SERVER_ROUTINE)EfsRpcReadFileRaw,
    (SERVER_ROUTINE)EfsRpcWriteFileRaw,
    (SERVER_ROUTINE)EfsRpcCloseRaw,
    (SERVER_ROUTINE)EfsRpcEncryptFileSrv,
    (SERVER_ROUTINE)EfsRpcDecryptFileSrv,
    (SERVER_ROUTINE)EfsRpcQueryUsersOnFile,
    (SERVER_ROUTINE)EfsRpcQueryRecoveryAgents,
    (SERVER_ROUTINE)EfsRpcRemoveUsersFromFile,
    (SERVER_ROUTINE)EfsRpcAddUsersToFile,
    (SERVER_ROUTINE)Opnum10NotUsedOnWire,
    (SERVER_ROUTINE)EfsRpcNotSupported,
    (SERVER_ROUTINE)EfsRpcFileKeyInfo,
    (SERVER_ROUTINE)EfsRpcDuplicateEncryptionInfoFile,
    (SERVER_ROUTINE)Opnum14NotUsedOnWire,
    (SERVER_ROUTINE)EfsRpcAddUsersToFileEx,
    (SERVER_ROUTINE)EfsRpcFileKeyInfoEx,
    (SERVER_ROUTINE)Opnum17NotUsedOnWire,
    (SERVER_ROUTINE)EfsRpcGetEncryptedFileMetadata,
    (SERVER_ROUTINE)EfsRpcSetEncryptedFileMetadata,
    (SERVER_ROUTINE)EfsRpcFlushEfsCache,
    (SERVER_ROUTINE)EfsRpcEncryptFileExSrv
    };

static const MIDL_SERVER_INFO efsrpc_ServerInfo = 
    {
    &efsrpc_StubDesc,
    efsrpc_ServerRoutineTable,
    ms2Defs__MIDL_ProcFormatString.Format,
    efsrpc_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

