#pragma once
#include "Exceptions.h"
class Logic_error :public Exceptions
{
public:
	Logic_error(const std::string &m);

};

