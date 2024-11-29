#pragma once
#include "Logic_error.h"
class Out_of_range :public Logic_error
{
public:
	Out_of_range(const std::string &m);
};

