/*
 *  Author: Jun0x01@github.com
 *  Date:   2019.05.15
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
};

