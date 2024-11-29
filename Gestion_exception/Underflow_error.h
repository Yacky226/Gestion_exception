#pragma once
#include "Runtime_error.h"
class Underflow_error :public Runtime_error
{
public:
	Underflow_error(const std::string &m);
};

