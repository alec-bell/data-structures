#pragma once

#include "node.h"

namespace ds
{
    template<typename T>
    class stack
    {
    public:
        T pop();
        T peek();
        void push(T data);
        int size();
    private:
        node<T>* head = NULL;
    };

    template<typename T>
    T stack<T>::pop()
    {
        T data = head->data;
        head = head->next;
        return data;
    }

    template<typename T>
    T stack<T>::peek()
    {
        return head->data;
    }

    template<typename T>
    void stack<T>::push(T data)
    {
        node<T>* new_node = new node<T>();
        new_node->data = data;
        new_node->next = head;
        head = new_node;
    }

    template<typename T>
    int stack<T>::size()
    {
        int count = 0;
        node<T>* cur_node = head;
        while (cur_node != NULL)
        {
            count++;
            cur_node = cur_node->next;
        }
        return count;
    }
}