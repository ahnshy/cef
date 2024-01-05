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
// $hash=5e87111d30f695b234fe6e0fee539e8e15453c66$
//

#include "libcef_dll/cpptoc/views/browser_view_delegate_cpptoc.h"
#include "libcef_dll/cpptoc/client_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/views/browser_view_ctocpp.h"
#include "libcef_dll/ctocpp/views/view_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/template_util.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK browser_view_delegate_on_browser_created(
    struct _cef_browser_view_delegate_t* self,
    cef_browser_view_t* browser_view,
    cef_browser_t* browser) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: browser_view; type: refptr_diff
  DCHECK(browser_view);
  if (!browser_view) {
    return;
  }
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser) {
    return;
  }

  // Execute
  CefBrowserViewDelegateCppToC::Get(self)->OnBrowserCreated(
      CefBrowserViewCToCpp::Wrap(browser_view),
      CefBrowserCToCpp::Wrap(browser));
}

void CEF_CALLBACK browser_view_delegate_on_browser_destroyed(
    struct _cef_browser_view_delegate_t* self,
    cef_browser_view_t* browser_view,
    cef_browser_t* browser) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: browser_view; type: refptr_diff
  DCHECK(browser_view);
  if (!browser_view) {
    return;
  }
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser) {
    return;
  }

  // Execute
  CefBrowserViewDelegateCppToC::Get(self)->OnBrowserDestroyed(
      CefBrowserViewCToCpp::Wrap(browser_view),
      CefBrowserCToCpp::Wrap(browser));
}

cef_browser_view_delegate_t* CEF_CALLBACK
browser_view_delegate_get_delegate_for_popup_browser_view(
    struct _cef_browser_view_delegate_t* self,
    cef_browser_view_t* browser_view,
    const struct _cef_browser_settings_t* settings,
    cef_client_t* client,
    int is_devtools) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: browser_view; type: refptr_diff
  DCHECK(browser_view);
  if (!browser_view) {
    return NULL;
  }
  // Verify param: settings; type: struct_byref_const
  DCHECK(settings);
  if (!settings) {
    return NULL;
  }
  if (!template_util::has_valid_size(settings)) {
    DCHECK(false) << "invalid settings->[base.]size";
    return NULL;
  }
  // Unverified params: client

  // Translate param: settings; type: struct_byref_const
  CefBrowserSettings settingsObj;
  if (settings) {
    settingsObj.Set(*settings, false);
  }

  // Execute
  CefRefPtr<CefBrowserViewDelegate> _retval =
      CefBrowserViewDelegateCppToC::Get(self)->GetDelegateForPopupBrowserView(
          CefBrowserViewCToCpp::Wrap(browser_view), settingsObj,
          CefClientCppToC::Unwrap(client), is_devtools ? true : false);

  // Return type: refptr_same
  return CefBrowserViewDelegateCppToC::Wrap(_retval);
}

int CEF_CALLBACK browser_view_delegate_on_popup_browser_view_created(
    struct _cef_browser_view_delegate_t* self,
    cef_browser_view_t* browser_view,
    cef_browser_view_t* popup_browser_view,
    int is_devtools) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: browser_view; type: refptr_diff
  DCHECK(browser_view);
  if (!browser_view) {
    return 0;
  }
  // Verify param: popup_browser_view; type: refptr_diff
  DCHECK(popup_browser_view);
  if (!popup_browser_view) {
    return 0;
  }

  // Execute
  bool _retval =
      CefBrowserViewDelegateCppToC::Get(self)->OnPopupBrowserViewCreated(
          CefBrowserViewCToCpp::Wrap(browser_view),
          CefBrowserViewCToCpp::Wrap(popup_browser_view),
          is_devtools ? true : false);

  // Return type: bool
  return _retval;
}

cef_chrome_toolbar_type_t CEF_CALLBACK
browser_view_delegate_get_chrome_toolbar_type(
    struct _cef_browser_view_delegate_t* self,
    cef_browser_view_t* browser_view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CEF_CTT_NONE;
  }
  // Verify param: browser_view; type: refptr_diff
  DCHECK(browser_view);
  if (!browser_view) {
    return CEF_CTT_NONE;
  }

  // Execute
  cef_chrome_toolbar_type_t _retval =
      CefBrowserViewDelegateCppToC::Get(self)->GetChromeToolbarType(
          CefBrowserViewCToCpp::Wrap(browser_view));

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK
browser_view_delegate_use_frameless_window_for_picture_in_picture(
    struct _cef_browser_view_delegate_t* self,
    cef_browser_view_t* browser_view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: browser_view; type: refptr_diff
  DCHECK(browser_view);
  if (!browser_view) {
    return 0;
  }

  // Execute
  bool _retval = CefBrowserViewDelegateCppToC::Get(self)
                     ->UseFramelessWindowForPictureInPicture(
                         CefBrowserViewCToCpp::Wrap(browser_view));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK browser_view_delegate_on_gesture_command(
    struct _cef_browser_view_delegate_t* self,
    cef_browser_view_t* browser_view,
    cef_gesture_command_t gesture_command) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: browser_view; type: refptr_diff
  DCHECK(browser_view);
  if (!browser_view) {
    return 0;
  }

  // Execute
  bool _retval = CefBrowserViewDelegateCppToC::Get(self)->OnGestureCommand(
      CefBrowserViewCToCpp::Wrap(browser_view), gesture_command);

  // Return type: bool
  return _retval;
}

cef_size_t CEF_CALLBACK
browser_view_delegate_get_preferred_size(struct _cef_view_delegate_t* self,
                                         cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = CefBrowserViewDelegateCppToC::Get(
                           reinterpret_cast<cef_browser_view_delegate_t*>(self))
                           ->GetPreferredSize(CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK
browser_view_delegate_get_minimum_size(struct _cef_view_delegate_t* self,
                                       cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = CefBrowserViewDelegateCppToC::Get(
                           reinterpret_cast<cef_browser_view_delegate_t*>(self))
                           ->GetMinimumSize(CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK
browser_view_delegate_get_maximum_size(struct _cef_view_delegate_t* self,
                                       cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = CefBrowserViewDelegateCppToC::Get(
                           reinterpret_cast<cef_browser_view_delegate_t*>(self))
                           ->GetMaximumSize(CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK
browser_view_delegate_get_height_for_width(struct _cef_view_delegate_t* self,
                                           cef_view_t* view,
                                           int width) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return 0;
  }

  // Execute
  int _retval = CefBrowserViewDelegateCppToC::Get(
                    reinterpret_cast<cef_browser_view_delegate_t*>(self))
                    ->GetHeightForWidth(CefViewCToCpp::Wrap(view), width);

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK
browser_view_delegate_on_parent_view_changed(struct _cef_view_delegate_t* self,
                                             cef_view_t* view,
                                             int added,
                                             cef_view_t* parent) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }
  // Verify param: parent; type: refptr_diff
  DCHECK(parent);
  if (!parent) {
    return;
  }

  // Execute
  CefBrowserViewDelegateCppToC::Get(
      reinterpret_cast<cef_browser_view_delegate_t*>(self))
      ->OnParentViewChanged(CefViewCToCpp::Wrap(view), added ? true : false,
                            CefViewCToCpp::Wrap(parent));
}

void CEF_CALLBACK
browser_view_delegate_on_child_view_changed(struct _cef_view_delegate_t* self,
                                            cef_view_t* view,
                                            int added,
                                            cef_view_t* child) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }
  // Verify param: child; type: refptr_diff
  DCHECK(child);
  if (!child) {
    return;
  }

  // Execute
  CefBrowserViewDelegateCppToC::Get(
      reinterpret_cast<cef_browser_view_delegate_t*>(self))
      ->OnChildViewChanged(CefViewCToCpp::Wrap(view), added ? true : false,
                           CefViewCToCpp::Wrap(child));
}

void CEF_CALLBACK
browser_view_delegate_on_window_changed(struct _cef_view_delegate_t* self,
                                        cef_view_t* view,
                                        int added) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }

  // Execute
  CefBrowserViewDelegateCppToC::Get(
      reinterpret_cast<cef_browser_view_delegate_t*>(self))
      ->OnWindowChanged(CefViewCToCpp::Wrap(view), added ? true : false);
}

void CEF_CALLBACK
browser_view_delegate_on_layout_changed(struct _cef_view_delegate_t* self,
                                        cef_view_t* view,
                                        const cef_rect_t* new_bounds) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }
  // Verify param: new_bounds; type: simple_byref_const
  DCHECK(new_bounds);
  if (!new_bounds) {
    return;
  }

  // Translate param: new_bounds; type: simple_byref_const
  CefRect new_boundsVal = new_bounds ? *new_bounds : CefRect();

  // Execute
  CefBrowserViewDelegateCppToC::Get(
      reinterpret_cast<cef_browser_view_delegate_t*>(self))
      ->OnLayoutChanged(CefViewCToCpp::Wrap(view), new_boundsVal);
}

void CEF_CALLBACK
browser_view_delegate_on_focus(struct _cef_view_delegate_t* self,
                               cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }

  // Execute
  CefBrowserViewDelegateCppToC::Get(
      reinterpret_cast<cef_browser_view_delegate_t*>(self))
      ->OnFocus(CefViewCToCpp::Wrap(view));
}

void CEF_CALLBACK
browser_view_delegate_on_blur(struct _cef_view_delegate_t* self,
                              cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }

  // Execute
  CefBrowserViewDelegateCppToC::Get(
      reinterpret_cast<cef_browser_view_delegate_t*>(self))
      ->OnBlur(CefViewCToCpp::Wrap(view));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefBrowserViewDelegateCppToC::CefBrowserViewDelegateCppToC() {
  GetStruct()->on_browser_created = browser_view_delegate_on_browser_created;
  GetStruct()->on_browser_destroyed =
      browser_view_delegate_on_browser_destroyed;
  GetStruct()->get_delegate_for_popup_browser_view =
      browser_view_delegate_get_delegate_for_popup_browser_view;
  GetStruct()->on_popup_browser_view_created =
      browser_view_delegate_on_popup_browser_view_created;
  GetStruct()->get_chrome_toolbar_type =
      browser_view_delegate_get_chrome_toolbar_type;
  GetStruct()->use_frameless_window_for_picture_in_picture =
      browser_view_delegate_use_frameless_window_for_picture_in_picture;
  GetStruct()->on_gesture_command = browser_view_delegate_on_gesture_command;
  GetStruct()->base.get_preferred_size =
      browser_view_delegate_get_preferred_size;
  GetStruct()->base.get_minimum_size = browser_view_delegate_get_minimum_size;
  GetStruct()->base.get_maximum_size = browser_view_delegate_get_maximum_size;
  GetStruct()->base.get_height_for_width =
      browser_view_delegate_get_height_for_width;
  GetStruct()->base.on_parent_view_changed =
      browser_view_delegate_on_parent_view_changed;
  GetStruct()->base.on_child_view_changed =
      browser_view_delegate_on_child_view_changed;
  GetStruct()->base.on_window_changed = browser_view_delegate_on_window_changed;
  GetStruct()->base.on_layout_changed = browser_view_delegate_on_layout_changed;
  GetStruct()->base.on_focus = browser_view_delegate_on_focus;
  GetStruct()->base.on_blur = browser_view_delegate_on_blur;
}

// DESTRUCTOR - Do not edit by hand.

CefBrowserViewDelegateCppToC::~CefBrowserViewDelegateCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefBrowserViewDelegate> CefCppToCRefCounted<
    CefBrowserViewDelegateCppToC,
    CefBrowserViewDelegate,
    cef_browser_view_delegate_t>::UnwrapDerived(CefWrapperType type,
                                                cef_browser_view_delegate_t*
                                                    s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefBrowserViewDelegateCppToC,
                                   CefBrowserViewDelegate,
                                   cef_browser_view_delegate_t>::kWrapperType =
    WT_BROWSER_VIEW_DELEGATE;
