#pragma once
#include "afxdialogex.h"


// Edit1 对话框

class Edit1 : public CDialogEx
{
	DECLARE_DYNAMIC(Edit1)

public:
	Edit1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Edit1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATORMFC_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
