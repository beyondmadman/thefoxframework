// TestLog.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <log/log_file.h>

int _tmain(int argc, _TCHAR* argv[])
{
	THEFOX_SET_LOG_FILE(".\\logs","TestLog");

	int i=100;
	while (--i)
	{
		Sleep(rand()%50);
		THEFOX_LOG(TRACE) <<"dddddddd" << "dfdfd";
		THEFOX_LOG(DEBUG) << "dfdf" << 12 << -12.23;
		THEFOX_LOG(INFO) << "dfdf";
		THEFOX_LOG(WARN) << "dfdf";
		THEFOX_LOG(ERROR) << "dfdf";
	}
	return 0;
}

