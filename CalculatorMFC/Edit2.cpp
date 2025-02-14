// Edit2.cpp: 实现文件
//

#include "pch.h"
#include "CalculatorMFC.h"
#include "afxdialogex.h"
#include "Edit2.h"


// Edit2 对话框

IMPLEMENT_DYNAMIC(Edit2, CDialogEx)

Edit2::Edit2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATORMFC_DIALOG, pParent)
{

}

Edit2::~Edit2()
{
}

void Edit2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Edit2, CDialogEx)
END_MESSAGE_MAP()


// Edit2 消息处理程序
