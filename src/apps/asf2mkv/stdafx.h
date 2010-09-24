/*
 * $Id$
 *
 * (C) 2003-2005 Gabest
 * (C) 2006-2010 see AUTHORS
 *
 * This file is part of asf2mkv.
 *
 * Asf2mkv is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Asf2mkv is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#endif

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows 95 and Windows NT 4 or later.
#define WINVER 0x0600		// Change this to the appropriate value to target Windows 98 and Windows 2000 or later.
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

// turns off MFC's hiding of some common and often safely ignored warning messages
#define _AFX_ALL_WARNINGS

#include <afxwin.h>			// MFC core and standard components
#include <afxext.h>			// MFC extensions
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxtempl.h>
#include <afxdisp.h>
#include <Shlwapi.h>
#include <atlpath.h>
#include <streams.h>
#include <dvdmedia.h>

#include "../../CmdUI/CmdUI.h"
#include "../../thirdparty/ui/ResizableLib/ResizableDialog.h"
#include "../../thirdparty/ui/ResizableLib/ResizablePage.h"
#include "../../thirdparty/ui/ResizableLib/ResizableSheet.h"
#include "../../thirdparty/ui/sizecbar/sizecbar.h"
#include "../../thirdparty/ui/sizecbar/scbarcf.h"
#include "../../thirdparty/ui/sizecbar/scbarg.h"
#include "../../DSUtil/DSUtil.h"
#include "../../DSUtil/SharedInclude.h"
#include "../../filters/Filters.h"

#define ResStr(id) CString(MAKEINTRESOURCE(id))
