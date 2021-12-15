#include "TrackLog.h"
void LogInfo(char* File, char* Funtion, int lineNum){
	ofstream out("TrackLog.log", ios::app | ios::out);
	if (out.is_open())
	{
		out << File << "->" << Funtion << "->" << lineNum << "(" << __TIME__<<")\n";
		out.close();
	}
}
