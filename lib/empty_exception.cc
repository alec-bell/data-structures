#include "empty_exception.h"

using namespace ds;

const char* empty::what() const noexcept
{
    return "Object has no elements!";
}