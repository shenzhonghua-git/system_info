#pragma once
#include "SystemInfo.h"
#include <tchar.h>
class saveSpecs
{
private:
	static const TCHAR *xmlDTD;
	static const TCHAR *htmlDTD;
	static const wchar_t *xmlHeaderComment;
public:
	static bool saveAsXML(SystemInfo*);
	static bool saveAsHTML(SystemInfo*);
	static bool saveAsBin(SystemInfo*);
	static bool saveAsText(SystemInfo*);
	saveSpecs();
	~saveSpecs();
};
