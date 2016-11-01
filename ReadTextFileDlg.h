
// ReadTextFileDlg.h : 標頭檔
//

#pragma once


// CReadTextFileDlg 對話方塊
class CReadTextFileDlg : public CDialogEx
{
// 建構
public:
	CReadTextFileDlg(CWnd* pParent = NULL);	// 標準建構函式

// 對話方塊資料
	enum { IDD = IDD_READTEXTFILE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援


// 程式碼實作
protected:
	HICON m_hIcon;

	// 產生的訊息對應函式
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnGetfilepath();
	afx_msg void OnBnClickedBtnReaddata();

	afx_msg void OnBnClickedBtnWrite();
};
