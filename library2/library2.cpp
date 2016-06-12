// library2.cpp
#include "stdafx.h"


#include "library1.h"

#include "library2.h"

#include <windows.h>
#include <commctrl.h>
#include <shellapi.h>
#include <commdlg.h>
#include <math.h>

#include <xmmintrin.h>
#include <emmintrin.h>
#include <intrin.h>

#include <sstream>
#include <iostream>


void WriteFloatToStream(){
	float val = 1.0f;
	std::wstring str1 = std::to_wstring(val);
	const wchar_t * str2 = str1.c_str();

	// assumes externalStream has been initialised
	externalStream->Write(str2, sizeof(char[11]), NULL);
}
