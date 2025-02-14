#pragma once
#include "afxdialogex.h"


// Edit2 对话框

class Edit2 : public CDialogEx
{
	DECLARE_DYNAMIC(Edit2)

public:
	Edit2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Edit2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATORMFC_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
