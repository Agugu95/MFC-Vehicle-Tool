#pragma once


// CInCarName 대화 상자입니다.

class CInCarName : public CDialogEx
{
	DECLARE_DYNAMIC(CInCarName)

public:
	CInCarName(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CInCarName();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_IN_CarName };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
