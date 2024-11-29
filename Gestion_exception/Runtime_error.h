#pragma once
#include "Exceptions.h"
class Runtime_error :public Exceptions
{
	public:
		Runtime_error(const std::string &m);
		

};

