
// ABC_834.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CABC_834App:
// �� Ŭ������ ������ ���ؼ��� ABC_834.cpp�� �����Ͻʽÿ�.
//

class CABC_834App : public CWinApp
{
public:
	CABC_834App();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CABC_834App theApp;