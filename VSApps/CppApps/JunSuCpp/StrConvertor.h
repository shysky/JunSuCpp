/*
 *  Author: Jun0x01@github.com
 *  Date:   2019.05.13
 */
#pragma once
#include <string>
#include <afx.h>

class StrConvertor
{
public:
	StrConvertor();
	~StrConvertor();

public:
	// Convert CString to std::string
	static std::string CStringTstring(CString str);

	// Convert std::string to Cstring
	static CString stringTCString(std::string str);
};

