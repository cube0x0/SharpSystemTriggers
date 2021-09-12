

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ms-efs.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "ms-efs.h"

#define TYPE_FORMAT_STRING_SIZE   425                               
#define PROC_FORMAT_STRING_SIZE   1087                              
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

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: efsrpc, ver. 1.0,
   GUID={0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}} */



static const RPC_CLIENT_INTERFACE efsrpc___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000001
    };
RPC_IF_HANDLE efsrpc_v1_0_c_ifspec = (RPC_IF_HANDLE)& efsrpc___RpcClientInterface;

extern const MIDL_STUB_DESC efsrpc_StubDesc;

static RPC_BINDING_HANDLE efsrpc__MIDL_AutoBindHandle;


long EfsRpcOpenFileRaw( 
    /* [in] */ handle_t binding_h,
    /* [out] */ PEXIMPORT_CONTEXT_HANDLE *hContext,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ long Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[0],
                  binding_h,
                  hContext,
                  FileName,
                  Flags);
    return ( long  )_RetVal.Simple;
    
}


long EfsRpcReadFileRaw( 
    /* [in] */ PEXIMPORT_CONTEXT_HANDLE hContext,
    /* [out] */ EFS_EXIM_PIPE *EfsOutPipe)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[54],
                  hContext,
                  EfsOutPipe);
    return ( long  )_RetVal.Simple;
    
}


long EfsRpcWriteFileRaw( 
    /* [in] */ PEXIMPORT_CONTEXT_HANDLE hContext,
    /* [in] */ EFS_EXIM_PIPE *EfsInPipe)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[104],
                  hContext,
                  EfsInPipe);
    return ( long  )_RetVal.Simple;
    
}


void EfsRpcCloseRaw( 
    /* [out][in] */ PEXIMPORT_CONTEXT_HANDLE *hContext)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[154],
                  hContext);
    
}


long EfsRpcEncryptFileSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[192],
                  binding_h,
                  FileName);
    return ( long  )_RetVal.Simple;
    
}


long EfsRpcDecryptFileSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ unsigned long OpenFlag)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[234],
                  binding_h,
                  FileName,
                  OpenFlag);
    return ( long  )_RetVal.Simple;
    
}


DWORD EfsRpcQueryUsersOnFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [out] */ ENCRYPTION_CERTIFICATE_HASH_LIST **Users)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[282],
                  binding_h,
                  FileName,
                  Users);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcQueryRecoveryAgents( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [out] */ ENCRYPTION_CERTIFICATE_HASH_LIST **RecoveryAgents)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[330],
                  binding_h,
                  FileName,
                  RecoveryAgents);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcRemoveUsersFromFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_HASH_LIST *Users)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[378],
                  binding_h,
                  FileName,
                  Users);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcAddUsersToFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_LIST *EncryptionCertificates)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[426],
                  binding_h,
                  FileName,
                  EncryptionCertificates);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum10NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[474],
                  IDL_handle);
    
}


DWORD EfsRpcNotSupported( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *Reserved1,
    /* [string][in] */ wchar_t *Reserved2,
    /* [in] */ DWORD dwReserved1,
    /* [in] */ DWORD dwReserved2,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [in] */ BOOL bReserved)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[504],
                  binding_h,
                  Reserved1,
                  Reserved2,
                  dwReserved1,
                  dwReserved2,
                  Reserved,
                  bReserved);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcFileKeyInfo( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ DWORD InfoClass,
    /* [out] */ EFS_RPC_BLOB **KeyInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[576],
                  binding_h,
                  FileName,
                  InfoClass,
                  KeyInfo);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcDuplicateEncryptionInfoFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *SrcFileName,
    /* [string][in] */ wchar_t *DestFileName,
    /* [in] */ DWORD dwCreationDisposition,
    /* [in] */ DWORD dwAttributes,
    /* [unique][in] */ EFS_RPC_BLOB *RelativeSD,
    /* [in] */ BOOL bInheritHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[630],
                  binding_h,
                  SrcFileName,
                  DestFileName,
                  dwCreationDisposition,
                  dwAttributes,
                  RelativeSD,
                  bInheritHandle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum14NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[702],
                  IDL_handle);
    
}


DWORD EfsRpcAddUsersToFileEx( 
    /* [in] */ handle_t binding_h,
    /* [in] */ DWORD dwFlags,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_LIST *EncryptionCertificates)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[732],
                  binding_h,
                  dwFlags,
                  Reserved,
                  FileName,
                  EncryptionCertificates);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcFileKeyInfoEx( 
    /* [in] */ handle_t binding_h,
    /* [in] */ DWORD dwFileKeyInfoFlags,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ DWORD InfoClass,
    /* [out] */ EFS_RPC_BLOB **KeyInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[792],
                  binding_h,
                  dwFileKeyInfoFlags,
                  Reserved,
                  FileName,
                  InfoClass,
                  KeyInfo);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum17NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[858],
                  IDL_handle);
    
}


DWORD EfsRpcGetEncryptedFileMetadata( 
    /* [in] */ handle_t binding_h,
    /* [ref][string][in] */ wchar_t *FileName,
    /* [ref][out] */ EFS_RPC_BLOB **EfsStreamBlob)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[888],
                  binding_h,
                  FileName,
                  EfsStreamBlob);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcSetEncryptedFileMetadata( 
    /* [in] */ handle_t binding_h,
    /* [ref][string][in] */ wchar_t *FileName,
    /* [unique][in] */ EFS_RPC_BLOB *OldEfsStreamBlob,
    /* [ref][in] */ EFS_RPC_BLOB *NewEfsStreamBlob,
    /* [unique][in] */ ENCRYPTED_FILE_METADATA_SIGNATURE *NewEfsSignature)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[936],
                  binding_h,
                  FileName,
                  OldEfsStreamBlob,
                  NewEfsStreamBlob,
                  NewEfsSignature);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcFlushEfsCache( 
    /* [in] */ handle_t binding_h)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[996],
                  binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


long EfsRpcEncryptFileExSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [unique][string][in] */ wchar_t *ProtectorDescriptor,
    /* [in] */ unsigned long Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defs__MIDL_ProcFormatString.Format[1032],
                  binding_h,
                  FileName,
                  ProtectorDescriptor,
                  Flags);
    return ( long  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
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
/*  8 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 30 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter FileName */

/* 36 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Flags */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 48 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 50 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcReadFileRaw */

/* 54 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 56 */	NdrFcLong( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 64 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 66 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 68 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0x24 ),	/* 36 */
/* 72 */	NdrFcShort( 0x8 ),	/* 8 */
/* 74 */	0x4c,		/* Oi2 Flags:  has return, has pipes, has ext, */
			0x3,		/* 3 */
/* 76 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 86 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 88 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 90 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter EfsOutPipe */

/* 92 */	NdrFcShort( 0x4114 ),	/* Flags:  pipe, out, simple ref, srv alloc size=16 */
/* 94 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 96 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 98 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 100 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcWriteFileRaw */

/* 104 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x2 ),	/* 2 */
/* 112 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 114 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 116 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 118 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0x24 ),	/* 36 */
/* 122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 124 */	0x4c,		/* Oi2 Flags:  has return, has pipes, has ext, */
			0x3,		/* 3 */
/* 126 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 136 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 138 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 140 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter EfsInPipe */

/* 142 */	NdrFcShort( 0x10c ),	/* Flags:  pipe, in, simple ref, */
/* 144 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 146 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 150 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcCloseRaw */

/* 154 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x3 ),	/* 3 */
/* 162 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 164 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 166 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 168 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 170 */	NdrFcShort( 0x38 ),	/* 56 */
/* 172 */	NdrFcShort( 0x38 ),	/* 56 */
/* 174 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 176 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 186 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 188 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 190 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Procedure EfsRpcEncryptFileSrv */

/* 192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 202 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 204 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 210 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 212 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 222 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 224 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 226 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcDecryptFileSrv */

/* 234 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x5 ),	/* 5 */
/* 242 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 244 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 252 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 254 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 264 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 266 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 268 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter OpenFlag */

/* 270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 272 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 278 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcQueryUsersOnFile */

/* 282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x6 ),	/* 6 */
/* 290 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 292 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 300 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 302 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 304 */	NdrFcShort( 0x1 ),	/* 1 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 312 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 314 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 316 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Users */

/* 318 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 320 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 322 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 326 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcQueryRecoveryAgents */

/* 330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x7 ),	/* 7 */
/* 338 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 340 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 348 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 350 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 352 */	NdrFcShort( 0x1 ),	/* 1 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 360 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 362 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 364 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter RecoveryAgents */

/* 366 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 368 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 370 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 374 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcRemoveUsersFromFile */

/* 378 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 386 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 388 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 390 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 396 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 398 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 408 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 410 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 412 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Users */

/* 414 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 416 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 418 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcAddUsersToFile */

/* 426 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x9 ),	/* 9 */
/* 434 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 436 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 438 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 444 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 446 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x1 ),	/* 1 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 456 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 460 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EncryptionCertificates */

/* 462 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 464 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 466 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum10NotUsedOnWire */

/* 474 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0xa ),	/* 10 */
/* 482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 484 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 492 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 494 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure EfsRpcNotSupported */

/* 504 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0xb ),	/* 11 */
/* 512 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 514 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 516 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 518 */	NdrFcShort( 0x18 ),	/* 24 */
/* 520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 522 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 524 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x1 ),	/* 1 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Reserved1 */

/* 534 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 536 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 538 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Reserved2 */

/* 540 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 542 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 544 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter dwReserved1 */

/* 546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 548 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwReserved2 */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 558 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 560 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 562 */	NdrFcShort( 0x15c ),	/* Type Offset=348 */

	/* Parameter bReserved */

/* 564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 566 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFileKeyInfo */

/* 576 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0xc ),	/* 12 */
/* 584 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 586 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 588 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 594 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 596 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 598 */	NdrFcShort( 0x1 ),	/* 1 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 606 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 608 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 610 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InfoClass */

/* 612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 614 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter KeyInfo */

/* 618 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 620 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 622 */	NdrFcShort( 0x17e ),	/* Type Offset=382 */

	/* Return value */

/* 624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 626 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcDuplicateEncryptionInfoFile */

/* 630 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0xd ),	/* 13 */
/* 638 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 640 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 642 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 644 */	NdrFcShort( 0x18 ),	/* 24 */
/* 646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 648 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 650 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x1 ),	/* 1 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SrcFileName */

/* 660 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 662 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 664 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter DestFileName */

/* 666 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 668 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 670 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter dwCreationDisposition */

/* 672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 674 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwAttributes */

/* 678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 680 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RelativeSD */

/* 684 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 686 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 688 */	NdrFcShort( 0x15c ),	/* Type Offset=348 */

	/* Parameter bInheritHandle */

/* 690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 692 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 698 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum14NotUsedOnWire */

/* 702 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0xe ),	/* 14 */
/* 710 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 712 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 714 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 722 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure EfsRpcAddUsersToFileEx */

/* 732 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0xf ),	/* 15 */
/* 740 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 742 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 744 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 752 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFlags */

/* 762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 764 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 768 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 770 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 772 */	NdrFcShort( 0x15c ),	/* Type Offset=348 */

	/* Parameter FileName */

/* 774 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 776 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 778 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EncryptionCertificates */

/* 780 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 782 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 784 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFileKeyInfoEx */

/* 792 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x10 ),	/* 16 */
/* 800 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 802 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 804 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 806 */	NdrFcShort( 0x10 ),	/* 16 */
/* 808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 810 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 812 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFileKeyInfoFlags */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 828 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 830 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 832 */	NdrFcShort( 0x15c ),	/* Type Offset=348 */

	/* Parameter FileName */

/* 834 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 836 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 838 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InfoClass */

/* 840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 842 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter KeyInfo */

/* 846 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 848 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 850 */	NdrFcShort( 0x17e ),	/* Type Offset=382 */

	/* Return value */

/* 852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 854 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum17NotUsedOnWire */

/* 858 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x11 ),	/* 17 */
/* 866 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 868 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 870 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 876 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 878 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure EfsRpcGetEncryptedFileMetadata */

/* 888 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x12 ),	/* 18 */
/* 896 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 898 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 900 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 906 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 908 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 918 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 920 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 922 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EfsStreamBlob */

/* 924 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 926 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 928 */	NdrFcShort( 0x17e ),	/* Type Offset=382 */

	/* Return value */

/* 930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 932 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcSetEncryptedFileMetadata */

/* 936 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x13 ),	/* 19 */
/* 944 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 946 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 948 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 954 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 956 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 966 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 970 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter OldEfsStreamBlob */

/* 972 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 974 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 976 */	NdrFcShort( 0x15c ),	/* Type Offset=348 */

	/* Parameter NewEfsStreamBlob */

/* 978 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 980 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 982 */	NdrFcShort( 0x16a ),	/* Type Offset=362 */

	/* Parameter NewEfsSignature */

/* 984 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 986 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 988 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 992 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFlushEfsCache */

/* 996 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1004 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1006 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1008 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1014 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1016 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1028 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcEncryptFileExSrv */

/* 1032 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1040 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1042 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1044 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1050 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1052 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 1062 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1064 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1066 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ProtectorDescriptor */

/* 1068 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1070 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1072 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Parameter Flags */

/* 1074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1076 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1084 */	0x8,		/* FC_LONG */
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
/* 60 */	NdrFcShort( 0x90 ),	/* Offset= 144 (204) */
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
/* 138 */	NdrFcShort( 0x10 ),	/* 16 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0xa ),	/* Offset= 10 (152) */
/* 144 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (114) */
/* 148 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 150 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 152 */	
			0x12, 0x0,	/* FC_UP */
/* 154 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (124) */
/* 156 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 158 */	NdrFcShort( 0x20 ),	/* 32 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x8 ),	/* Offset= 8 (170) */
/* 164 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 166 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 168 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 170 */	
			0x12, 0x0,	/* FC_UP */
/* 172 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (100) */
/* 174 */	
			0x12, 0x0,	/* FC_UP */
/* 176 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (136) */
/* 178 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 180 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 182 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 192 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 196 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 198 */	
			0x12, 0x0,	/* FC_UP */
/* 200 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (156) */
/* 202 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 204 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 206 */	NdrFcShort( 0x10 ),	/* 16 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0xa ),	/* Offset= 10 (220) */
/* 212 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 214 */	NdrFcShort( 0xff68 ),	/* Offset= -152 (62) */
/* 216 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 218 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 220 */	
			0x12, 0x0,	/* FC_UP */
/* 222 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (182) */
/* 224 */	
			0x11, 0x0,	/* FC_RP */
/* 226 */	NdrFcShort( 0xffea ),	/* Offset= -22 (204) */
/* 228 */	
			0x11, 0x0,	/* FC_RP */
/* 230 */	NdrFcShort( 0x62 ),	/* Offset= 98 (328) */
/* 232 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 238 */	NdrFcLong( 0x1f4 ),	/* 500 */
/* 242 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 248 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 252 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 256 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 258 */	NdrFcShort( 0x4 ),	/* 4 */
/* 260 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 262 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 264 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 266 */	NdrFcShort( 0x10 ),	/* 16 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0xa ),	/* Offset= 10 (280) */
/* 272 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 274 */	0x0,		/* 0 */
			NdrFcShort( 0xffdf ),	/* Offset= -33 (242) */
			0x36,		/* FC_POINTER */
/* 278 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 280 */	
			0x12, 0x0,	/* FC_UP */
/* 282 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (252) */
/* 284 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 286 */	NdrFcShort( 0x18 ),	/* 24 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x8 ),	/* Offset= 8 (298) */
/* 292 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 294 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 296 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 298 */	
			0x12, 0x0,	/* FC_UP */
/* 300 */	NdrFcShort( 0xff38 ),	/* Offset= -200 (100) */
/* 302 */	
			0x12, 0x0,	/* FC_UP */
/* 304 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (264) */
/* 306 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 316 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 320 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 322 */	
			0x12, 0x0,	/* FC_UP */
/* 324 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (284) */
/* 326 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 328 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 330 */	NdrFcShort( 0x10 ),	/* 16 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0xa ),	/* Offset= 10 (344) */
/* 336 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 338 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (232) */
/* 340 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 342 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 344 */	
			0x12, 0x0,	/* FC_UP */
/* 346 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (306) */
/* 348 */	
			0x12, 0x0,	/* FC_UP */
/* 350 */	NdrFcShort( 0xc ),	/* Offset= 12 (362) */
/* 352 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 358 */	NdrFcLong( 0x41000 ),	/* 266240 */
/* 362 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 364 */	NdrFcShort( 0x10 ),	/* 16 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0xa ),	/* Offset= 10 (378) */
/* 370 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 372 */	NdrFcShort( 0xffec ),	/* Offset= -20 (352) */
/* 374 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 376 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 378 */	
			0x12, 0x0,	/* FC_UP */
/* 380 */	NdrFcShort( 0xff00 ),	/* Offset= -256 (124) */
/* 382 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 384 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (348) */
/* 386 */	
			0x11, 0x0,	/* FC_RP */
/* 388 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (362) */
/* 390 */	
			0x12, 0x0,	/* FC_UP */
/* 392 */	NdrFcShort( 0x2 ),	/* Offset= 2 (394) */
/* 394 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 396 */	NdrFcShort( 0x20 ),	/* 32 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x8 ),	/* Offset= 8 (408) */
/* 402 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 404 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 406 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 408 */	
			0x12, 0x0,	/* FC_UP */
/* 410 */	NdrFcShort( 0xff32 ),	/* Offset= -206 (204) */
/* 412 */	
			0x12, 0x0,	/* FC_UP */
/* 414 */	NdrFcShort( 0xff7e ),	/* Offset= -130 (284) */
/* 416 */	
			0x12, 0x0,	/* FC_UP */
/* 418 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (362) */
/* 420 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 422 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short efsrpc_FormatStringOffsetTable[] =
    {
    0,
    54,
    104,
    154,
    192,
    234,
    282,
    330,
    378,
    426,
    474,
    504,
    576,
    630,
    702,
    732,
    792,
    858,
    888,
    936,
    996,
    1032
    };


static const MIDL_STUB_DESC efsrpc_StubDesc = 
    {
    (void *)& efsrpc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &efsrpc__MIDL_AutoBindHandle,
    0,
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
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

