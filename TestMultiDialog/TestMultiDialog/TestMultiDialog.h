
// TestMultiDialog.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������

#include "SubClass1.h"

// CTestMultiDialogApp: 
// �йش����ʵ�֣������ TestMultiDialog.cpp
//

class CTestMultiDialogApp : public CWinApp
{
public:
	CTestMultiDialogApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTestMultiDialogApp theApp;