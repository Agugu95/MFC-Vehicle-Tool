#pragma once


// CInCarName ��ȭ �����Դϴ�.

class CInCarName : public CDialogEx
{
	DECLARE_DYNAMIC(CInCarName)

public:
	CInCarName(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CInCarName();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_IN_CarName };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
