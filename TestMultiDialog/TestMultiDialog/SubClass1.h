#pragma once


// CSubClass1 对话框

class CSubClass1 : public CDialogEx
{
	DECLARE_DYNAMIC(CSubClass1)

public:
	CSubClass1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSubClass1();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedButton2();
	CString m_TestValue;
	afx_msg void OnEnChangeEdit1();
};
