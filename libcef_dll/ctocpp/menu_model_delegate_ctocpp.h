// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
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

#ifndef CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_DELEGATE_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_DELEGATE_CTOCPP_H_
#pragma once

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else  // BUILDING_CEF_SHARED

#include "include/cef_menu_model_delegate.h"
#include "include/capi/cef_menu_model_delegate_capi.h"
#include "include/cef_menu_model.h"
#include "include/capi/cef_menu_model_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefMenuModelDelegateCToCpp
    : public CefCToCpp<CefMenuModelDelegateCToCpp, CefMenuModelDelegate,
        cef_menu_model_delegate_t> {
 public:
  CefMenuModelDelegateCToCpp();

  // CefMenuModelDelegate methods.
  void ExecuteCommand(CefRefPtr<CefMenuModel> menu_model, int command_id,
      cef_event_flags_t event_flags) override;
  void MenuWillShow(CefRefPtr<CefMenuModel> menu_model) override;
  void MenuClosed(CefRefPtr<CefMenuModel> menu_model) override;
  bool FormatLabel(CefRefPtr<CefMenuModel> menu_model,
      CefString& label) override;
};

#endif  // BUILDING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_DELEGATE_CTOCPP_H_
