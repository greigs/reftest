// library1.cpp
#include "stdafx.h"
#include "library1.h"


IStream *externalStream = NULL; // global variable Definition 

void InitialiseStream()
{
	CreateStreamOnHGlobal(NULL, true, &externalStream);
}