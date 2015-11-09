
// bitmap_resizeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "bitmap_resize.h"
#include "bitmap_resizeDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cbitmap_resizeDlg dialog

UINT image_id = 0;

Cbitmap_resizeDlg::Cbitmap_resizeDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cbitmap_resizeDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cbitmap_resizeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(Cbitmap_resizeDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON1, &Cbitmap_resizeDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cbitmap_resizeDlg message handlers

BOOL Cbitmap_resizeDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	image_id = IDB_BITMAP1;
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void Cbitmap_resizeDlg::OnPaint()
{
	CDC *pDC=this->GetWindowDC();
	CRect rctClient;
	//GetClientRect(rctClient);
	this->GetWindowRect(&rctClient);	
	CDC dcMem;
	dcMem.CreateCompatibleDC(pDC);
	CBitmap m_bmp;
	m_bmp.LoadBitmap(image_id);
	BITMAP bitmap;
	m_bmp.GetBitmap(&bitmap);
	CBitmap   *pbmpOld=dcMem.SelectObject(&m_bmp); 
	pDC->StretchBlt(0,0,rctClient.Width()-5,rctClient.Height()-8,&dcMem,0,0, 
		bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);

	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR Cbitmap_resizeDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

static CBrush gBr;

HBRUSH Cbitmap_resizeDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Change any attributes of the DC here	
	//if(pWnd==this)
	//{
	//	CBitmap bitmap;
	//	bitmap.LoadBitmap(image_id);
	//	gBr.Detach();

	//	gBr.CreatePatternBrush(&bitmap);
	//	
	//	bitmap.DeleteObject();
	//	
	//	pDC->SetBkMode(TRANSPARENT);
	//	return gBr; //主窗口背景使用这个背景刷
	//}
	//else
	{
		pDC->SetBkMode(TRANSPARENT);
		return   (HBRUSH)::GetStockObject(NULL_BRUSH); //其他控件使用透明背景
	}

	// TODO:  Return a different brush if the default is not desired
	return hbr;
}


void Cbitmap_resizeDlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here

	image_id = IDB_BITMAP2;	
	
	////显示图像	
	//CRect rect;	
	//this->GetWindowRect(&rect);
	//CDC *pDC=this->GetWindowDC();
	//pDC->SetStretchBltMode(COLORONCOLOR);
	//CBitmap cbt;
	//BITMAP bt;
	//cbt.LoadBitmap(IDB_BITMAP2);
	//cbt.GetBitmap(&bt);

	//pDC->StretchBlt(0,0,rect.Width(),rect.Height(),);
	
	Invalidate();

}
	//UpdateWindow();
	

