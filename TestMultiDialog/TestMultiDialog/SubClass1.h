#pragma once


// CSubClass1 �Ի���

class CSubClass1 : public CDialogEx
{
	DECLARE_DYNAMIC(CSubClass1)

public:
	CSubClass1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSubClass1();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedButton2();
	CString m_TestValue;
	afx_msg void OnEnChangeEdit1();
};
