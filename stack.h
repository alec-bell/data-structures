#pragma once

namespace ds
{
    template<typename T>
    struct node
    {
        T data;
        node* next;
    };

    template<typename T>
    class stack
    {
    public:
        T pop();
        T peek();
        void push(T data);
    private:
        node<T>* head;
    };
}