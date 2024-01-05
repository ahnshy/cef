// Copyright (c) 2024 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=22540c35c70f5601d4fcfdf0d4114d1f11df674f$
//

#include "libcef_dll/ctocpp/test/translator_test_ref_ptr_client_child_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
int CefTranslatorTestRefPtrClientChildCToCpp::GetOtherValue() {
  shutdown_checker::AssertNotShutdown();

  cef_translator_test_ref_ptr_client_child_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_other_value)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_other_value(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
int CefTranslatorTestRefPtrClientChildCToCpp::GetValue() {
  shutdown_checker::AssertNotShutdown();

  cef_translator_test_ref_ptr_client_t* _struct =
      reinterpret_cast<cef_translator_test_ref_ptr_client_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_value)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_value(_struct);

  // Return type: simple
  return _retval;
}

// CONSTRUCTOR - Do not edit by hand.

CefTranslatorTestRefPtrClientChildCToCpp::
    CefTranslatorTestRefPtrClientChildCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefTranslatorTestRefPtrClientChildCToCpp::
    ~CefTranslatorTestRefPtrClientChildCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_translator_test_ref_ptr_client_child_t*
CefCToCppRefCounted<CefTranslatorTestRefPtrClientChildCToCpp,
                    CefTranslatorTestRefPtrClientChild,
                    cef_translator_test_ref_ptr_client_child_t>::
    UnwrapDerived(CefWrapperType type, CefTranslatorTestRefPtrClientChild* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<
    CefTranslatorTestRefPtrClientChildCToCpp,
    CefTranslatorTestRefPtrClientChild,
    cef_translator_test_ref_ptr_client_child_t>::kWrapperType =
    WT_TRANSLATOR_TEST_REF_PTR_CLIENT_CHILD;
