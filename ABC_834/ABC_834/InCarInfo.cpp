// InCarInfo.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "ABC_834.h"
#include "InCarInfo.h"
#include "afxdialogex.h"


// CInCarInfo 대화 상자입니다.

IMPLEMENT_DYNAMIC(CInCarInfo, CDialogEx)

CInCarInfo::CInCarInfo(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_IN_CarInfo, pParent)
{

}

CInCarInfo::~CInCarInfo()
{
}

void CInCarInfo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CInCarInfo, CDialogEx)
END_MESSAGE_MAP()


// CInCarInfo 메시지 처리기입니다.
