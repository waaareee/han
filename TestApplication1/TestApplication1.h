
// TestApplication1.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CTestApplication1App:
// �� Ŭ������ ������ ���ؼ��� TestApplication1.cpp�� �����Ͻʽÿ�.
//

class CTestApplication1App : public CWinApp
{
public:
	CTestApplication1App();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CTestApplication1App theApp;