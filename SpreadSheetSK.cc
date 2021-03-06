// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.

#include "stdafx.h"
#include "SpreadSheet.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>



OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_1;



SpreadSheet::mSpreadSheet_ptr SpreadSheet::mSpreadSheet_Helper::_nil() {
  return ::SpreadSheet::mSpreadSheet::_nil();
}

::CORBA::Boolean SpreadSheet::mSpreadSheet_Helper::is_nil(::SpreadSheet::mSpreadSheet_ptr p) {
  return ::CORBA::is_nil(p);

}

void SpreadSheet::mSpreadSheet_Helper::release(::SpreadSheet::mSpreadSheet_ptr p) {
  ::CORBA::release(p);
}

void SpreadSheet::mSpreadSheet_Helper::marshalObjRef(::SpreadSheet::mSpreadSheet_ptr obj, cdrStream& s) {
  ::SpreadSheet::mSpreadSheet::_marshalObjRef(obj, s);
}

SpreadSheet::mSpreadSheet_ptr SpreadSheet::mSpreadSheet_Helper::unmarshalObjRef(cdrStream& s) {
  return ::SpreadSheet::mSpreadSheet::_unmarshalObjRef(s);
}

void SpreadSheet::mSpreadSheet_Helper::duplicate(::SpreadSheet::mSpreadSheet_ptr obj) {
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
}

SpreadSheet::mSpreadSheet_ptr
SpreadSheet::mSpreadSheet::_duplicate(::SpreadSheet::mSpreadSheet_ptr obj)
{
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
  return obj;
}

SpreadSheet::mSpreadSheet_ptr
SpreadSheet::mSpreadSheet::_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


SpreadSheet::mSpreadSheet_ptr
SpreadSheet::mSpreadSheet::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

SpreadSheet::mSpreadSheet_ptr
SpreadSheet::mSpreadSheet::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_mSpreadSheet _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_mSpreadSheet* _the_nil_ptr = 0;
  if( !_the_nil_ptr ) {
    omni::nilRefLock().lock();
    if( !_the_nil_ptr ) {
      _the_nil_ptr = new _objref_mSpreadSheet;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* SpreadSheet::mSpreadSheet::_PD_repoId = "IDL:SpreadSheet/mSpreadSheet:1.0";


SpreadSheet::_objref_mSpreadSheet::~_objref_mSpreadSheet() {
  
}


SpreadSheet::_objref_mSpreadSheet::_objref_mSpreadSheet(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::SpreadSheet::mSpreadSheet::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
SpreadSheet::_objref_mSpreadSheet::_ptrToObjRef(const char* id)
{
  if( id == ::SpreadSheet::mSpreadSheet::_PD_repoId )
    return (::SpreadSheet::mSpreadSheet_ptr) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (::CORBA::Object_ptr) this;

  if( omni::strMatch(id, ::SpreadSheet::mSpreadSheet::_PD_repoId) )
    return (::SpreadSheet::mSpreadSheet_ptr) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (::CORBA::Object_ptr) this;

  return 0;
}

// Proxy call descriptor class. Mangled signature:
//  _cstring_i_cstring_i_cstring_i_cstring
class _0RL_cd_B4928F44D6EB29F8_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_B4928F44D6EB29F8_00000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  ::CORBA::String_var arg_1_;
  const char* arg_1;
  ::CORBA::String_var arg_2_;
  const char* arg_2;
  ::CORBA::String_var result;
};

void _0RL_cd_B4928F44D6EB29F8_00000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);
  _n.marshalString(arg_1,0);
  _n.marshalString(arg_2,0);

}

void _0RL_cd_B4928F44D6EB29F8_00000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();
  arg_1_ = _n.unmarshalString(0);
  arg_1 = arg_1_.in();
  arg_2_ = _n.unmarshalString(0);
  arg_2 = arg_2_.in();

}

void _0RL_cd_B4928F44D6EB29F8_00000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalString(result,0);

}

void _0RL_cd_B4928F44D6EB29F8_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalString(0);

}

const char* const _0RL_cd_B4928F44D6EB29F8_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_B4928F44D6EB29F8_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_B4928F44D6EB29F8_00000000* tcd = (_0RL_cd_B4928F44D6EB29F8_00000000*)cd;
  SpreadSheet::_impl_mSpreadSheet* impl = (SpreadSheet::_impl_mSpreadSheet*) svnt->_ptrToInterface(SpreadSheet::mSpreadSheet::_PD_repoId);
  tcd->result = impl->get_string(tcd->arg_0, tcd->arg_1, tcd->arg_2);


}

char* SpreadSheet::_objref_mSpreadSheet::get_string(const char* l, const char* c, const char* sn)
{
  _0RL_cd_B4928F44D6EB29F8_00000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_10000000, "get_string", 11);
  _call_desc.arg_0 = l;
  _call_desc.arg_1 = c;
  _call_desc.arg_2 = sn;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}
// Proxy call descriptor class. Mangled signature:
//  void_i_cstring_i_cstring_i_cstring_i_cfloat
class _0RL_cd_B4928F44D6EB29F8_20000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_B4928F44D6EB29F8_20000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  ::CORBA::String_var arg_1_;
  const char* arg_1;
  ::CORBA::String_var arg_2_;
  const char* arg_2;
  ::CORBA::Float arg_3;
};

void _0RL_cd_B4928F44D6EB29F8_20000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);
  _n.marshalString(arg_1,0);
  _n.marshalString(arg_2,0);
  arg_3 >>= _n;

}

void _0RL_cd_B4928F44D6EB29F8_20000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();
  arg_1_ = _n.unmarshalString(0);
  arg_1 = arg_1_.in();
  arg_2_ = _n.unmarshalString(0);
  arg_2 = arg_2_.in();
  (::CORBA::Float&)arg_3 <<= _n;

}

const char* const _0RL_cd_B4928F44D6EB29F8_20000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_B4928F44D6EB29F8_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_B4928F44D6EB29F8_20000000* tcd = (_0RL_cd_B4928F44D6EB29F8_20000000*)cd;
  SpreadSheet::_impl_mSpreadSheet* impl = (SpreadSheet::_impl_mSpreadSheet*) svnt->_ptrToInterface(SpreadSheet::mSpreadSheet::_PD_repoId);
  impl->set_value(tcd->arg_0, tcd->arg_1, tcd->arg_2, tcd->arg_3);


}

void SpreadSheet::_objref_mSpreadSheet::set_value(const char* l, const char* c, const char* sn, ::CORBA::Float v)
{
  _0RL_cd_B4928F44D6EB29F8_20000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_30000000, "set_value", 10);
  _call_desc.arg_0 = l;
  _call_desc.arg_1 = c;
  _call_desc.arg_2 = sn;
  _call_desc.arg_3 = v;

  _invoke(_call_desc);



}
// Proxy call descriptor class. Mangled signature:
//  _cStringList_i_cstring_i_cstring_i_cstring_i_cstring_i_cstring
class _0RL_cd_B4928F44D6EB29F8_40000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_B4928F44D6EB29F8_40000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  ::CORBA::String_var arg_1_;
  const char* arg_1;
  ::CORBA::String_var arg_2_;
  const char* arg_2;
  ::CORBA::String_var arg_3_;
  const char* arg_3;
  ::CORBA::String_var arg_4_;
  const char* arg_4;
  StringList_var result;
};

void _0RL_cd_B4928F44D6EB29F8_40000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);
  _n.marshalString(arg_1,0);
  _n.marshalString(arg_2,0);
  _n.marshalString(arg_3,0);
  _n.marshalString(arg_4,0);

}

void _0RL_cd_B4928F44D6EB29F8_40000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();
  arg_1_ = _n.unmarshalString(0);
  arg_1 = arg_1_.in();
  arg_2_ = _n.unmarshalString(0);
  arg_2 = arg_2_.in();
  arg_3_ = _n.unmarshalString(0);
  arg_3 = arg_3_.in();
  arg_4_ = _n.unmarshalString(0);
  arg_4 = arg_4_.in();

}

void _0RL_cd_B4928F44D6EB29F8_40000000::marshalReturnedValues(cdrStream& _n)
{
  (const StringList&) result >>= _n;

}

void _0RL_cd_B4928F44D6EB29F8_40000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = new StringList;
  (StringList&)result <<= _n;

}

const char* const _0RL_cd_B4928F44D6EB29F8_40000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_B4928F44D6EB29F8_50000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_B4928F44D6EB29F8_40000000* tcd = (_0RL_cd_B4928F44D6EB29F8_40000000*)cd;
  SpreadSheet::_impl_mSpreadSheet* impl = (SpreadSheet::_impl_mSpreadSheet*) svnt->_ptrToInterface(SpreadSheet::mSpreadSheet::_PD_repoId);
  tcd->result = impl->get_string_range(tcd->arg_0, tcd->arg_1, tcd->arg_2, tcd->arg_3, tcd->arg_4);


}

StringList* SpreadSheet::_objref_mSpreadSheet::get_string_range(const char* l1, const char* c1, const char* l2, const char* c2, const char* sn)
{
  _0RL_cd_B4928F44D6EB29F8_40000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_50000000, "get_string_range", 17);
  _call_desc.arg_0 = l1;
  _call_desc.arg_1 = c1;
  _call_desc.arg_2 = l2;
  _call_desc.arg_3 = c2;
  _call_desc.arg_4 = sn;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}
// Proxy call descriptor class. Mangled signature:
//  void_i_cstring_i_cstring_i_cstring_i_cFloatList
class _0RL_cd_B4928F44D6EB29F8_60000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_B4928F44D6EB29F8_60000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  ::CORBA::String_var arg_1_;
  const char* arg_1;
  ::CORBA::String_var arg_2_;
  const char* arg_2;
  FloatList_var arg_3_;
  const FloatList* arg_3;
};

void _0RL_cd_B4928F44D6EB29F8_60000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);
  _n.marshalString(arg_1,0);
  _n.marshalString(arg_2,0);
  (const FloatList&) *arg_3 >>= _n;

}

void _0RL_cd_B4928F44D6EB29F8_60000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();
  arg_1_ = _n.unmarshalString(0);
  arg_1 = arg_1_.in();
  arg_2_ = _n.unmarshalString(0);
  arg_2 = arg_2_.in();
  arg_3_ = new FloatList;
  (FloatList&)arg_3_ <<= _n;
  arg_3 = &arg_3_.in();

}

const char* const _0RL_cd_B4928F44D6EB29F8_60000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_B4928F44D6EB29F8_70000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_B4928F44D6EB29F8_60000000* tcd = (_0RL_cd_B4928F44D6EB29F8_60000000*)cd;
  SpreadSheet::_impl_mSpreadSheet* impl = (SpreadSheet::_impl_mSpreadSheet*) svnt->_ptrToInterface(SpreadSheet::mSpreadSheet::_PD_repoId);
  impl->set_value_range(tcd->arg_0, tcd->arg_1, tcd->arg_2, *tcd->arg_3);


}

void SpreadSheet::_objref_mSpreadSheet::set_value_range(const char* l, const char* c, const char* sn, const ::FloatList v)
{
  _0RL_cd_B4928F44D6EB29F8_60000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_70000000, "set_value_range", 16);
  _call_desc.arg_0 = l;
  _call_desc.arg_1 = c;
  _call_desc.arg_2 = sn;
  _call_desc.arg_3 = &(::FloatList&) v;

  _invoke(_call_desc);



}
// Proxy call descriptor class. Mangled signature:
//  void_i_cstring_i_cstring_i_cstring_i_cstring
class _0RL_cd_B4928F44D6EB29F8_80000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_B4928F44D6EB29F8_80000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  ::CORBA::String_var arg_1_;
  const char* arg_1;
  ::CORBA::String_var arg_2_;
  const char* arg_2;
  ::CORBA::String_var arg_3_;
  const char* arg_3;
};

void _0RL_cd_B4928F44D6EB29F8_80000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);
  _n.marshalString(arg_1,0);
  _n.marshalString(arg_2,0);
  _n.marshalString(arg_3,0);

}

void _0RL_cd_B4928F44D6EB29F8_80000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();
  arg_1_ = _n.unmarshalString(0);
  arg_1 = arg_1_.in();
  arg_2_ = _n.unmarshalString(0);
  arg_2 = arg_2_.in();
  arg_3_ = _n.unmarshalString(0);
  arg_3 = arg_3_.in();

}

const char* const _0RL_cd_B4928F44D6EB29F8_80000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_B4928F44D6EB29F8_90000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_B4928F44D6EB29F8_80000000* tcd = (_0RL_cd_B4928F44D6EB29F8_80000000*)cd;
  SpreadSheet::_impl_mSpreadSheet* impl = (SpreadSheet::_impl_mSpreadSheet*) svnt->_ptrToInterface(SpreadSheet::mSpreadSheet::_PD_repoId);
  impl->set_string(tcd->arg_0, tcd->arg_1, tcd->arg_2, tcd->arg_3);


}

void SpreadSheet::_objref_mSpreadSheet::set_string(const char* l, const char* c, const char* sn, const char* v)
{
  _0RL_cd_B4928F44D6EB29F8_80000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_90000000, "set_string", 11);
  _call_desc.arg_0 = l;
  _call_desc.arg_1 = c;
  _call_desc.arg_2 = sn;
  _call_desc.arg_3 = v;

  _invoke(_call_desc);



}
// Proxy call descriptor class. Mangled signature:
//  void_i_cstring_i_cstring_i_cstring_i_cStringList
class _0RL_cd_B4928F44D6EB29F8_a0000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_B4928F44D6EB29F8_a0000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  ::CORBA::String_var arg_1_;
  const char* arg_1;
  ::CORBA::String_var arg_2_;
  const char* arg_2;
  StringList_var arg_3_;
  const StringList* arg_3;
};

void _0RL_cd_B4928F44D6EB29F8_a0000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);
  _n.marshalString(arg_1,0);
  _n.marshalString(arg_2,0);
  (const StringList&) *arg_3 >>= _n;

}

void _0RL_cd_B4928F44D6EB29F8_a0000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();
  arg_1_ = _n.unmarshalString(0);
  arg_1 = arg_1_.in();
  arg_2_ = _n.unmarshalString(0);
  arg_2 = arg_2_.in();
  arg_3_ = new StringList;
  (StringList&)arg_3_ <<= _n;
  arg_3 = &arg_3_.in();

}

const char* const _0RL_cd_B4928F44D6EB29F8_a0000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_B4928F44D6EB29F8_b0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_B4928F44D6EB29F8_a0000000* tcd = (_0RL_cd_B4928F44D6EB29F8_a0000000*)cd;
  SpreadSheet::_impl_mSpreadSheet* impl = (SpreadSheet::_impl_mSpreadSheet*) svnt->_ptrToInterface(SpreadSheet::mSpreadSheet::_PD_repoId);
  impl->set_string_range(tcd->arg_0, tcd->arg_1, tcd->arg_2, *tcd->arg_3);


}

void SpreadSheet::_objref_mSpreadSheet::set_string_range(const char* l, const char* c, const char* sn, const ::StringList v)
{
  _0RL_cd_B4928F44D6EB29F8_a0000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_b0000000, "set_string_range", 17);
  _call_desc.arg_0 = l;
  _call_desc.arg_1 = c;
  _call_desc.arg_2 = sn;
  _call_desc.arg_3 = &(::StringList&) v;

  _invoke(_call_desc);



}
SpreadSheet::_pof_mSpreadSheet::~_pof_mSpreadSheet() {}


omniObjRef*
SpreadSheet::_pof_mSpreadSheet::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::SpreadSheet::_objref_mSpreadSheet(ior, id);
}


::CORBA::Boolean
SpreadSheet::_pof_mSpreadSheet::is_a(const char* id) const
{
  if( omni::ptrStrMatch(id, ::SpreadSheet::mSpreadSheet::_PD_repoId) )
    return 1;
  
  return 0;
}

const SpreadSheet::_pof_mSpreadSheet _the_pof_SpreadSheet_mmSpreadSheet;

SpreadSheet::_impl_mSpreadSheet::~_impl_mSpreadSheet() {}


::CORBA::Boolean
SpreadSheet::_impl_mSpreadSheet::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if( omni::strMatch(op, "get_string") ) {

    _0RL_cd_B4928F44D6EB29F8_00000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_10000000, "get_string", 11, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "set_value") ) {

    _0RL_cd_B4928F44D6EB29F8_20000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_30000000, "set_value", 10, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "get_string_range") ) {

    _0RL_cd_B4928F44D6EB29F8_40000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_50000000, "get_string_range", 17, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "set_value_range") ) {

    _0RL_cd_B4928F44D6EB29F8_60000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_70000000, "set_value_range", 16, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "set_string") ) {

    _0RL_cd_B4928F44D6EB29F8_80000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_90000000, "set_string", 11, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "set_string_range") ) {

    _0RL_cd_B4928F44D6EB29F8_a0000000 _call_desc(_0RL_lcfn_B4928F44D6EB29F8_b0000000, "set_string_range", 17, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
SpreadSheet::_impl_mSpreadSheet::_ptrToInterface(const char* id)
{
  if( id == ::SpreadSheet::mSpreadSheet::_PD_repoId )
    return (::SpreadSheet::_impl_mSpreadSheet*) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (void*) 1;

  if( omni::strMatch(id, ::SpreadSheet::mSpreadSheet::_PD_repoId) )
    return (::SpreadSheet::_impl_mSpreadSheet*) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (void*) 1;
  return 0;
}

const char*
SpreadSheet::_impl_mSpreadSheet::_mostDerivedRepoId()
{
  return ::SpreadSheet::mSpreadSheet::_PD_repoId;
}

POA_SpreadSheet::mSpreadSheet::~mSpreadSheet() {}

