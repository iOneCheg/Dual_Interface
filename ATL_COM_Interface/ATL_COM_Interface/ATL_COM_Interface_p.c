

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for ATL_COM_Interface.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ATL_COM_Interface_i.h"

#define TYPE_FORMAT_STRING_SIZE   1209                              
#define PROC_FORMAT_STRING_SIZE   181                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _ATL_COM_Interface_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ATL_COM_Interface_MIDL_TYPE_FORMAT_STRING;

typedef struct _ATL_COM_Interface_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ATL_COM_Interface_MIDL_PROC_FORMAT_STRING;

typedef struct _ATL_COM_Interface_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ATL_COM_Interface_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ATL_COM_Interface_MIDL_TYPE_FORMAT_STRING ATL_COM_Interface__MIDL_TypeFormatString;
extern const ATL_COM_Interface_MIDL_PROC_FORMAT_STRING ATL_COM_Interface__MIDL_ProcFormatString;
extern const ATL_COM_Interface_MIDL_EXPR_FORMAT_STRING ATL_COM_Interface__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDynamicArray_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDynamicArray_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ATL_COM_Interface_MIDL_PROC_FORMAT_STRING ATL_COM_Interface__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Add */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter object */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Remove */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	NdrFcShort( 0x10 ),	/* 16 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter object */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x9 ),	/* 9 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x22 ),	/* 34 */
/* 86 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 88 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 96 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_meanValue */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0xa ),	/* 10 */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x2c ),	/* 44 */
/* 122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 124 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 132 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetData */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0xb ),	/* 11 */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 160 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arr */

/* 168 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ATL_COM_Interface_MIDL_TYPE_FORMAT_STRING ATL_COM_Interface__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  8 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 12 */	NdrFcShort( 0x4a2 ),	/* Offset= 1186 (1198) */
/* 14 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 16 */	NdrFcShort( 0x2 ),	/* Offset= 2 (18) */
/* 18 */	
			0x13, 0x0,	/* FC_OP */
/* 20 */	NdrFcShort( 0x488 ),	/* Offset= 1160 (1180) */
/* 22 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 24 */	NdrFcShort( 0x18 ),	/* 24 */
/* 26 */	NdrFcShort( 0xa ),	/* 10 */
/* 28 */	NdrFcLong( 0x8 ),	/* 8 */
/* 32 */	NdrFcShort( 0x84 ),	/* Offset= 132 (164) */
/* 34 */	NdrFcLong( 0xd ),	/* 13 */
/* 38 */	NdrFcShort( 0xce ),	/* Offset= 206 (244) */
/* 40 */	NdrFcLong( 0x9 ),	/* 9 */
/* 44 */	NdrFcShort( 0x114 ),	/* Offset= 276 (320) */
/* 46 */	NdrFcLong( 0xc ),	/* 12 */
/* 50 */	NdrFcShort( 0x330 ),	/* Offset= 816 (866) */
/* 52 */	NdrFcLong( 0x24 ),	/* 36 */
/* 56 */	NdrFcShort( 0x364 ),	/* Offset= 868 (924) */
/* 58 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 62 */	NdrFcShort( 0x380 ),	/* Offset= 896 (958) */
/* 64 */	NdrFcLong( 0x10 ),	/* 16 */
/* 68 */	NdrFcShort( 0x3a4 ),	/* Offset= 932 (1000) */
/* 70 */	NdrFcLong( 0x2 ),	/* 2 */
/* 74 */	NdrFcShort( 0x3c8 ),	/* Offset= 968 (1042) */
/* 76 */	NdrFcLong( 0x3 ),	/* 3 */
/* 80 */	NdrFcShort( 0x3ec ),	/* Offset= 1004 (1084) */
/* 82 */	NdrFcLong( 0x14 ),	/* 20 */
/* 86 */	NdrFcShort( 0x410 ),	/* Offset= 1040 (1126) */
/* 88 */	NdrFcShort( 0xffff ),	/* Offset= -1 (87) */
/* 90 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 92 */	NdrFcShort( 0x2 ),	/* 2 */
/* 94 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 96 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 98 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 100 */	0x0 , 
			0x0,		/* 0 */
/* 102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 110 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 112 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (90) */
/* 118 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 120 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 122 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 126 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 132 */	0x0 , 
			0x0,		/* 0 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 142 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 144 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 146 */	NdrFcShort( 0x4 ),	/* 4 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	0x13, 0x0,	/* FC_OP */
/* 158 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (112) */
/* 160 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 162 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 164 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 168 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 170 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 172 */	NdrFcShort( 0x4 ),	/* 4 */
/* 174 */	NdrFcShort( 0x4 ),	/* 4 */
/* 176 */	0x11, 0x0,	/* FC_RP */
/* 178 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (122) */
/* 180 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 182 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 184 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 196 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 198 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 200 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 202 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 212 */	0x0 , 
			0x0,		/* 0 */
/* 214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 226 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 228 */	0x0 , 
			0x0,		/* 0 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 238 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 240 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (184) */
/* 242 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 244 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x6 ),	/* Offset= 6 (256) */
/* 252 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 254 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 256 */	
			0x11, 0x0,	/* FC_RP */
/* 258 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (202) */
/* 260 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 262 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 272 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 274 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 276 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 278 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 288 */	0x0 , 
			0x0,		/* 0 */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 298 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 302 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 304 */	0x0 , 
			0x0,		/* 0 */
/* 306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 314 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 316 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (260) */
/* 318 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 320 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x6 ),	/* Offset= 6 (332) */
/* 328 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 330 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 332 */	
			0x11, 0x0,	/* FC_RP */
/* 334 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (278) */
/* 336 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 338 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 340 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 342 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 344 */	0x0 , 
			0x0,		/* 0 */
/* 346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x2 ),	/* Offset= 2 (356) */
/* 356 */	NdrFcShort( 0x10 ),	/* 16 */
/* 358 */	NdrFcShort( 0x2f ),	/* 47 */
/* 360 */	NdrFcLong( 0x14 ),	/* 20 */
/* 364 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 366 */	NdrFcLong( 0x3 ),	/* 3 */
/* 370 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 372 */	NdrFcLong( 0x11 ),	/* 17 */
/* 376 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 378 */	NdrFcLong( 0x2 ),	/* 2 */
/* 382 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 384 */	NdrFcLong( 0x4 ),	/* 4 */
/* 388 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 390 */	NdrFcLong( 0x5 ),	/* 5 */
/* 394 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 396 */	NdrFcLong( 0xb ),	/* 11 */
/* 400 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 402 */	NdrFcLong( 0xa ),	/* 10 */
/* 406 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 408 */	NdrFcLong( 0x6 ),	/* 6 */
/* 412 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (644) */
/* 414 */	NdrFcLong( 0x7 ),	/* 7 */
/* 418 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 420 */	NdrFcLong( 0x8 ),	/* 8 */
/* 424 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (650) */
/* 426 */	NdrFcLong( 0xd ),	/* 13 */
/* 430 */	NdrFcShort( 0xff0a ),	/* Offset= -246 (184) */
/* 432 */	NdrFcLong( 0x9 ),	/* 9 */
/* 436 */	NdrFcShort( 0xff50 ),	/* Offset= -176 (260) */
/* 438 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 442 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (654) */
/* 444 */	NdrFcLong( 0x24 ),	/* 36 */
/* 448 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (662) */
/* 450 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 454 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (662) */
/* 456 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 460 */	NdrFcShort( 0x10a ),	/* Offset= 266 (726) */
/* 462 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 466 */	NdrFcShort( 0x108 ),	/* Offset= 264 (730) */
/* 468 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 472 */	NdrFcShort( 0x106 ),	/* Offset= 262 (734) */
/* 474 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 478 */	NdrFcShort( 0x104 ),	/* Offset= 260 (738) */
/* 480 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 484 */	NdrFcShort( 0x102 ),	/* Offset= 258 (742) */
/* 486 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 490 */	NdrFcShort( 0x100 ),	/* Offset= 256 (746) */
/* 492 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 496 */	NdrFcShort( 0xea ),	/* Offset= 234 (730) */
/* 498 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 502 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (734) */
/* 504 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 508 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (750) */
/* 510 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 514 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (746) */
/* 516 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 520 */	NdrFcShort( 0xea ),	/* Offset= 234 (754) */
/* 522 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 526 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (758) */
/* 528 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 532 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (762) */
/* 534 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 538 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (766) */
/* 540 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 544 */	NdrFcShort( 0xea ),	/* Offset= 234 (778) */
/* 546 */	NdrFcLong( 0x10 ),	/* 16 */
/* 550 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 552 */	NdrFcLong( 0x12 ),	/* 18 */
/* 556 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 558 */	NdrFcLong( 0x13 ),	/* 19 */
/* 562 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 564 */	NdrFcLong( 0x15 ),	/* 21 */
/* 568 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 570 */	NdrFcLong( 0x16 ),	/* 22 */
/* 574 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 576 */	NdrFcLong( 0x17 ),	/* 23 */
/* 580 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 582 */	NdrFcLong( 0xe ),	/* 14 */
/* 586 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (786) */
/* 588 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 592 */	NdrFcShort( 0xcc ),	/* Offset= 204 (796) */
/* 594 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 598 */	NdrFcShort( 0xca ),	/* Offset= 202 (800) */
/* 600 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 604 */	NdrFcShort( 0x7e ),	/* Offset= 126 (730) */
/* 606 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 610 */	NdrFcShort( 0x7c ),	/* Offset= 124 (734) */
/* 612 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 616 */	NdrFcShort( 0x7a ),	/* Offset= 122 (738) */
/* 618 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 622 */	NdrFcShort( 0x70 ),	/* Offset= 112 (734) */
/* 624 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 628 */	NdrFcShort( 0x6a ),	/* Offset= 106 (734) */
/* 630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* Offset= 0 (634) */
/* 636 */	NdrFcLong( 0x1 ),	/* 1 */
/* 640 */	NdrFcShort( 0x0 ),	/* Offset= 0 (640) */
/* 642 */	NdrFcShort( 0xffff ),	/* Offset= -1 (641) */
/* 644 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 648 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 650 */	
			0x13, 0x0,	/* FC_OP */
/* 652 */	NdrFcShort( 0xfde4 ),	/* Offset= -540 (112) */
/* 654 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 656 */	NdrFcShort( 0x2 ),	/* Offset= 2 (658) */
/* 658 */	
			0x13, 0x0,	/* FC_OP */
/* 660 */	NdrFcShort( 0x208 ),	/* Offset= 520 (1180) */
/* 662 */	
			0x13, 0x0,	/* FC_OP */
/* 664 */	NdrFcShort( 0x2a ),	/* Offset= 42 (706) */
/* 666 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 668 */	NdrFcLong( 0x2f ),	/* 47 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 678 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 680 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 682 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 684 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 686 */	NdrFcShort( 0x1 ),	/* 1 */
/* 688 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 690 */	NdrFcShort( 0x4 ),	/* 4 */
/* 692 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 694 */	0x0 , 
			0x0,		/* 0 */
/* 696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 704 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 706 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 708 */	NdrFcShort( 0x10 ),	/* 16 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0xa ),	/* Offset= 10 (722) */
/* 714 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 716 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 718 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (666) */
/* 720 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 722 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 724 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (684) */
/* 726 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 728 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 730 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 732 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 734 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 736 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 738 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 740 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 742 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 744 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 746 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 748 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 750 */	
			0x13, 0x0,	/* FC_OP */
/* 752 */	NdrFcShort( 0xff94 ),	/* Offset= -108 (644) */
/* 754 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 756 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (650) */
/* 758 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 760 */	NdrFcShort( 0xfdc0 ),	/* Offset= -576 (184) */
/* 762 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 764 */	NdrFcShort( 0xfe08 ),	/* Offset= -504 (260) */
/* 766 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 768 */	NdrFcShort( 0x2 ),	/* Offset= 2 (770) */
/* 770 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 772 */	NdrFcShort( 0x2 ),	/* Offset= 2 (774) */
/* 774 */	
			0x13, 0x0,	/* FC_OP */
/* 776 */	NdrFcShort( 0x194 ),	/* Offset= 404 (1180) */
/* 778 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 780 */	NdrFcShort( 0x2 ),	/* Offset= 2 (782) */
/* 782 */	
			0x13, 0x0,	/* FC_OP */
/* 784 */	NdrFcShort( 0x14 ),	/* Offset= 20 (804) */
/* 786 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 788 */	NdrFcShort( 0x10 ),	/* 16 */
/* 790 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 792 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 794 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 796 */	
			0x13, 0x0,	/* FC_OP */
/* 798 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (786) */
/* 800 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 802 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 804 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 806 */	NdrFcShort( 0x20 ),	/* 32 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x0 ),	/* Offset= 0 (810) */
/* 812 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 814 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 816 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 818 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 820 */	NdrFcShort( 0xfe1c ),	/* Offset= -484 (336) */
/* 822 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 824 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 828 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 834 */	0x0 , 
			0x0,		/* 0 */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 844 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 846 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 848 */	NdrFcShort( 0x4 ),	/* 4 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	0x13, 0x0,	/* FC_OP */
/* 860 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (804) */
/* 862 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 864 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 866 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x6 ),	/* Offset= 6 (878) */
/* 874 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 876 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 878 */	
			0x11, 0x0,	/* FC_RP */
/* 880 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (824) */
/* 882 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 884 */	NdrFcShort( 0x4 ),	/* 4 */
/* 886 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 892 */	0x0 , 
			0x0,		/* 0 */
/* 894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 902 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 904 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 906 */	NdrFcShort( 0x4 ),	/* 4 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	0x13, 0x0,	/* FC_OP */
/* 918 */	NdrFcShort( 0xff2c ),	/* Offset= -212 (706) */
/* 920 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 922 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 924 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x6 ),	/* Offset= 6 (936) */
/* 932 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 934 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 936 */	
			0x11, 0x0,	/* FC_RP */
/* 938 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (882) */
/* 940 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 944 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 946 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 948 */	NdrFcShort( 0x10 ),	/* 16 */
/* 950 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 952 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 954 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (940) */
			0x5b,		/* FC_END */
/* 958 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 960 */	NdrFcShort( 0x18 ),	/* 24 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0xa ),	/* Offset= 10 (974) */
/* 966 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 968 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 970 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (946) */
/* 972 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 974 */	
			0x11, 0x0,	/* FC_RP */
/* 976 */	NdrFcShort( 0xfcfa ),	/* Offset= -774 (202) */
/* 978 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 980 */	NdrFcShort( 0x1 ),	/* 1 */
/* 982 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 988 */	0x0 , 
			0x0,		/* 0 */
/* 990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 998 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1000 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1004 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1006 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1008 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1010 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1012 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1014 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (978) */
/* 1016 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1018 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1020 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1022 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1024 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1030 */	0x0 , 
			0x0,		/* 0 */
/* 1032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1040 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1042 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1048 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1050 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1052 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1054 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1056 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1020) */
/* 1058 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1060 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1062 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1066 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1072 */	0x0 , 
			0x0,		/* 0 */
/* 1074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1082 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1084 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1090 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1092 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1094 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1096 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1098 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1062) */
/* 1100 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1102 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1104 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1108 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1114 */	0x0 , 
			0x0,		/* 0 */
/* 1116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1124 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1126 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1130 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1132 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1134 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1136 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1138 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1140 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1104) */
/* 1142 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1144 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1146 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1150 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1152 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1154 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1158 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1160 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1162 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1164 */	0x0 , 
			0x0,		/* 0 */
/* 1166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1174 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1176 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1146) */
/* 1178 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1180 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1182 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1184 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1154) */
/* 1186 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1186) */
/* 1188 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1190 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1192 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1194 */	NdrFcShort( 0xfb6c ),	/* Offset= -1172 (22) */
/* 1196 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1198 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0xfb58 ),	/* Offset= -1192 (14) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDynamicArray, ver. 0.0,
   GUID={0xB5CA1F64,0xF36D,0x4128,{0x9E,0x22,0xD8,0xB5,0x2C,0xEC,0xAA,0x6B}} */

#pragma code_seg(".orpc")
static const unsigned short IDynamicArray_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    108,
    144
    };

static const MIDL_STUBLESS_PROXY_INFO IDynamicArray_ProxyInfo =
    {
    &Object_StubDesc,
    ATL_COM_Interface__MIDL_ProcFormatString.Format,
    &IDynamicArray_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDynamicArray_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ATL_COM_Interface__MIDL_ProcFormatString.Format,
    &IDynamicArray_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IDynamicArrayProxyVtbl = 
{
    &IDynamicArray_ProxyInfo,
    &IID_IDynamicArray,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDynamicArray::Add */ ,
    (void *) (INT_PTR) -1 /* IDynamicArray::Remove */ ,
    (void *) (INT_PTR) -1 /* IDynamicArray::get_Count */ ,
    (void *) (INT_PTR) -1 /* IDynamicArray::get_meanValue */ ,
    (void *) (INT_PTR) -1 /* IDynamicArray::GetData */
};


static const PRPC_STUB_FUNCTION IDynamicArray_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDynamicArrayStubVtbl =
{
    &IID_IDynamicArray,
    &IDynamicArray_ServerInfo,
    12,
    &IDynamicArray_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ATL_COM_Interface__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ATL_COM_Interface_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDynamicArrayProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ATL_COM_Interface_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDynamicArrayStubVtbl,
    0
};

PCInterfaceName const _ATL_COM_Interface_InterfaceNamesList[] = 
{
    "IDynamicArray",
    0
};

const IID *  const _ATL_COM_Interface_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _ATL_COM_Interface_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ATL_COM_Interface, pIID, n)

int __stdcall _ATL_COM_Interface_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_ATL_COM_Interface_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo ATL_COM_Interface_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ATL_COM_Interface_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ATL_COM_Interface_StubVtblList,
    (const PCInterfaceName * ) & _ATL_COM_Interface_InterfaceNamesList,
    (const IID ** ) & _ATL_COM_Interface_BaseIIDList,
    & _ATL_COM_Interface_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

