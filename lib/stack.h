#pragma once

#include "node.h"
#include "empty_exception.h"

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
        if (head == NULL)
            throw empty();
        node<T>* top = head;
        head = head->next;
        T data = top->data;
        free(top);
        return data;
    }

    template<typename T>
    T stack<T>::peek()
    {
        if (head == NULL)
            throw empty();
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