// InCarName.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "ABC_834.h"
#include "InCarName.h"
#include "afxdialogex.h"


// CInCarName 대화 상자입니다.

IMPLEMENT_DYNAMIC(CInCarName, CDialogEx)

CInCarName::CInCarName(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_IN_CarName, pParent)
{

}

CInCarName::~CInCarName()
{
}

void CInCarName::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CInCarName, CDialogEx)
END_MESSAGE_MAP()


// CInCarName 메시지 처리기입니다.
