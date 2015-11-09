
// bitmap_resize.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cbitmap_resizeApp:
// See bitmap_resize.cpp for the implementation of this class
//

class Cbitmap_resizeApp : public CWinApp
{
public:
	Cbitmap_resizeApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Cbitmap_resizeApp theApp;