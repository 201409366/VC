// SubClass1.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "TestMultiDialog.h"
#include "SubClass1.h"
#include "afxdialogex.h"


// CSubClass1 �Ի���

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


// CSubClass1 ��Ϣ�������


void CSubClass1::OnBnClickedRadio1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CSubClass1::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	MessageBox(__T("Hello World !"), __T("msg"), MB_OK);
}


void CSubClass1::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	UpdateData(FALSE);
}
