#pragma once

namespace ds
{
    template<typename T>
    struct node
    {
        T data;
        node* next;
    };
}