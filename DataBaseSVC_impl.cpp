// -*-C++-*-
/*!
 * @file  DataBaseSVC_impl.cpp
 * @brief Service implementation code of DataBase.idl
 *
 */
#include "stdafx.h"
#include "DataBaseSVC_impl.h"

#include <vector>

#include "Form1.h"
#include "MyObject.h"




/*
 * Example implementational code for IDL interface DataBase::mDataBase
 */
mDataBaseSVC_impl::mDataBaseSVC_impl()
{
  // Please add extra constructor code here.
}


mDataBaseSVC_impl::~mDataBaseSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
char* mDataBaseSVC_impl::get_string(const char* l, const char* c, const char* sn)
{
	std::string cans = ExcelRTC::Form1::m_form->m_excel->GetCellValueSingle(string2binary<int>(c,10),l, sn);
	//char *ans = const_cast <char *>(cans);
	std::cout << cans.c_str() << std::endl;
	
	return CORBA::string_dup(cans.c_str());
	

	
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <char* mDataBaseSVC_impl::get_string(const char* l, const char* c, const char* sn)>"
#endif
  //return 0;
}

void mDataBaseSVC_impl::set_value(const char* l, const char* c, const char* sn, CORBA::Float v)
{

	ExcelRTC::Form1::m_form->m_excel->SetCellValueSingle<float>(string2binary<int>(c,10),l, sn, v);
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <void mDataBaseSVC_impl::set_value(const char* l, const char* c, const char* sn, CORBA::Float v)>"
#endif
}

StringList *mDataBaseSVC_impl::get_string_range(const char* l1, const char* c1, const char* l2, const char* c2, const char* sn)
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <DataBase::StringList mDataBaseSVC_impl::get_string_range(const char* l1, const char* c1, const char* l2, const char* c2, const char* sn)>"
#endif
  return 0;
}

void mDataBaseSVC_impl::set_value_range(const char* l, const char* c, const char* sn, ValueList v)
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <void mDataBaseSVC_impl::set_value_range(const char* l, const char* c, const char* sn, ValueList v)>"
#endif
}

void mDataBaseSVC_impl::set_string(const char* l, const char* c, const char* sn, const char* v)
{
	
	ExcelRTC::Form1::m_form->m_excel->SetCellValueSingle<System::String^>(string2binary<int>(c,10),l, sn, gcnew System::String(v));
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <void mDataBaseSVC_impl::set_string(const char* l, const char* c, const char* sn, const char* v)>"
#endif
}

void mDataBaseSVC_impl::set_string_range(const char* l, const char* c, const char* sn, StringList v)
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <void mDataBaseSVC_impl::set_string_range(const char* l, const char* c, const char* sn, StringList v)>"
#endif
}



// End of example implementational code


