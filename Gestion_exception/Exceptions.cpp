#include "Exceptions.h"

Exceptions::Exceptions(const std::string &m):message(m)
{
}

const std::string& Exceptions::what() const
{
	return message;
}
