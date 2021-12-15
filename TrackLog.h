#pragma once
#include <stdio.h>
#include <fstream>
#define TRACK LogInfo(__FILE__, __FUNCTION__, __LINE__);
using namespace std;
void LogInfo(char*, char*,int);
