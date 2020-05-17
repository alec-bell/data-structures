#pragma once

#include <exception>

namespace ds 
{
    struct empty : std::exception
    {
        const char* what() const noexcept;
    };
}