// Edit1.cpp: 实现文件
//

#include "pch.h"
#include "CalculatorMFC.h"
#include "afxdialogex.h"
#include "Edit1.h"


// Edit1 对话框

IMPLEMENT_DYNAMIC(Edit1, CDialogEx)

Edit1::Edit1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATORMFC_DIALOG, pParent)
{

}

Edit1::~Edit1()
{
}

void Edit1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Edit1, CDialogEx)
END_MESSAGE_MAP()


// Edit1 消息处理程序
