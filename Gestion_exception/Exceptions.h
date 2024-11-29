#pragma once
#include<iostream>
class Exceptions
{
protected:
	std::string message;
public:
	Exceptions(const std::string &m);
	virtual const std::string &what()const;
};

