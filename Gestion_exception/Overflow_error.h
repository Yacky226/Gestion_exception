#pragma once
#include "Runtime_error.h"
class Overflow_error :public Runtime_error
{
public:
	Overflow_error(const std::string &m);
};

