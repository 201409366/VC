// SubClass1.cpp : 实现文件
//

#include "stdafx.h"
#include "TestMultiDialog.h"
#include "SubClass1.h"
#include "afxdialogex.h"


// CSubClass1 对话框

IMPLEMENT_DYNAMIC(CSubClass1, CDialogEx)

CSubClass1::CSubClass1(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSubClass1::IDD, pParent)
	, m_TestValue(_T(""))
{

}

CSubClass1::~CSubClass1()
{
}

void CSubClass1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_TestValue);
}


BEGIN_MESSAGE_MAP(CSubClass1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &CSubClass1::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT1, &CSubClass1::OnEnChangeEdit1)
END_MESSAGE_MAP()


// CSubClass1 消息处理程序


void CSubClass1::OnBnClickedRadio1()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CSubClass1::OnBnClickedButton2()
{
	// TODO:  在此添加控件通知处理程序代码
	MessageBox(__T("Hello World !"), __T("msg"), MB_OK);
}


void CSubClass1::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	UpdateData(FALSE);
}
