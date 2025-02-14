// Text.cpp: 实现文件
//

#include "pch.h"
#include "CalculatorMFC.h"
#include "afxdialogex.h"
#include "Text.h"


// Text 对话框

IMPLEMENT_DYNAMIC(Text, CDialogEx)

Text::Text(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATORMFC_DIALOG, pParent)
{

}

Text::~Text()
{
}

void Text::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Text, CDialogEx)
END_MESSAGE_MAP()


// Text 消息处理程序
