#pragma once


// CInCarInfo 대화 상자입니다.

class CInCarInfo : public CDialogEx
{
	DECLARE_DYNAMIC(CInCarInfo)

public:
	CInCarInfo(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CInCarInfo();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_IN_CarInfo };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
