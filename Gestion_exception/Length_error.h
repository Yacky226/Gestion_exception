#pragma once
#include "Logic_error.h"
class Length_error :public Logic_error
{
public:
	Length_error(const std::string &m);
	
};

