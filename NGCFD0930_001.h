
// NGCFD0930_001.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CNGCFD0930_001App:
// �� Ŭ������ ������ ���ؼ��� NGCFD0930_001.cpp�� �����Ͻʽÿ�.
//

class CNGCFD0930_001App : public CWinApp
{
public:
	CNGCFD0930_001App();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CNGCFD0930_001App theApp;