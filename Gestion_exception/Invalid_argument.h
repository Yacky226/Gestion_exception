#pragma once
#include "Logic_error.h"
class Invalid_argument :  public Logic_error
{

public:
	Invalid_argument(const std::string &m);
	
};

