

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ATL_COM_Interface_i_h__
#define __ATL_COM_Interface_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDynamicArray_FWD_DEFINED__
#define __IDynamicArray_FWD_DEFINED__
typedef interface IDynamicArray IDynamicArray;

#endif 	/* __IDynamicArray_FWD_DEFINED__ */


#ifndef __DynamicArray_FWD_DEFINED__
#define __DynamicArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class DynamicArray DynamicArray;
#else
typedef struct DynamicArray DynamicArray;
#endif /* __cplusplus */

#endif 	/* __DynamicArray_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IDynamicArray_INTERFACE_DEFINED__
#define __IDynamicArray_INTERFACE_DEFINED__

/* interface IDynamicArray */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDynamicArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B5CA1F64-F36D-4128-9E22-D8B52CECAA6B")
    IDynamicArray : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            DOUBLE object) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Remove( 
            DOUBLE object) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ USHORT *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_meanValue( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetData( 
            /* [retval][out] */ SAFEARRAY * *arr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDynamicArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDynamicArray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDynamicArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDynamicArray * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDynamicArray * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDynamicArray * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDynamicArray * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDynamicArray * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IDynamicArray * This,
            DOUBLE object);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IDynamicArray * This,
            DOUBLE object);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDynamicArray * This,
            /* [retval][out] */ USHORT *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_meanValue )( 
            IDynamicArray * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetData )( 
            IDynamicArray * This,
            /* [retval][out] */ SAFEARRAY * *arr);
        
        END_INTERFACE
    } IDynamicArrayVtbl;

    interface IDynamicArray
    {
        CONST_VTBL struct IDynamicArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDynamicArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDynamicArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDynamicArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDynamicArray_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDynamicArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDynamicArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDynamicArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDynamicArray_Add(This,object)	\
    ( (This)->lpVtbl -> Add(This,object) ) 

#define IDynamicArray_Remove(This,object)	\
    ( (This)->lpVtbl -> Remove(This,object) ) 

#define IDynamicArray_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IDynamicArray_get_meanValue(This,pVal)	\
    ( (This)->lpVtbl -> get_meanValue(This,pVal) ) 

#define IDynamicArray_GetData(This,arr)	\
    ( (This)->lpVtbl -> GetData(This,arr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDynamicArray_INTERFACE_DEFINED__ */



#ifndef __ATL_COM_InterfaceLib_LIBRARY_DEFINED__
#define __ATL_COM_InterfaceLib_LIBRARY_DEFINED__

/* library ATL_COM_InterfaceLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ATL_COM_InterfaceLib;

EXTERN_C const CLSID CLSID_DynamicArray;

#ifdef __cplusplus

class DECLSPEC_UUID("4D3B286B-80FC-4CA4-84EF-7C6BEF1DF581")
DynamicArray;
#endif
#endif /* __ATL_COM_InterfaceLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize64(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree64(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


