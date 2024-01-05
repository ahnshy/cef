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
// $hash=fae5e9e76aed000f5009696ef1166b6563d749fe$
//

#include "libcef_dll/ctocpp/print_dialog_callback_ctocpp.h"
#include "libcef_dll/ctocpp/print_settings_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefPrintDialogCallbackCToCpp::Continue(
    CefRefPtr<CefPrintSettings> settings) {
  shutdown_checker::AssertNotShutdown();

  cef_print_dialog_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cont)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: settings; type: refptr_same
  DCHECK(settings.get());
  if (!settings.get()) {
    return;
  }

  // Execute
  _struct->cont(_struct, CefPrintSettingsCToCpp::Unwrap(settings));
}

NO_SANITIZE("cfi-icall") void CefPrintDialogCallbackCToCpp::Cancel() {
  shutdown_checker::AssertNotShutdown();

  cef_print_dialog_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cancel)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->cancel(_struct);
}

// CONSTRUCTOR - Do not edit by hand.

CefPrintDialogCallbackCToCpp::CefPrintDialogCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefPrintDialogCallbackCToCpp::~CefPrintDialogCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_print_dialog_callback_t* CefCToCppRefCounted<
    CefPrintDialogCallbackCToCpp,
    CefPrintDialogCallback,
    cef_print_dialog_callback_t>::UnwrapDerived(CefWrapperType type,
                                                CefPrintDialogCallback* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefPrintDialogCallbackCToCpp,
                                   CefPrintDialogCallback,
                                   cef_print_dialog_callback_t>::kWrapperType =
    WT_PRINT_DIALOG_CALLBACK;
