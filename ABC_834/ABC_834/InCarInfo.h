#pragma once


// CInCarInfo ��ȭ �����Դϴ�.

class CInCarInfo : public CDialogEx
{
	DECLARE_DYNAMIC(CInCarInfo)

public:
	CInCarInfo(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CInCarInfo();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_IN_CarInfo };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
