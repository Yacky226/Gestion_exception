#include "Invalid_argument.h"

Invalid_argument::Invalid_argument(const std::string &m):Logic_error("Invalid argurment: "+m)
{
}
