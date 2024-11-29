#include "Runtime_error.h"

Runtime_error::Runtime_error(const std::string &m):Exceptions("Runtime error: "+m)
{
}

