#pragma once

#include "node.h"
#include "empty_exception.h"

namespace ds
{
    template<typename T>
    class queue
    {
    public:
        void push_back(T data);
        T front();
        T pop_front();
        int size();
    private:
        node<T>* head = NULL;
    };

    template<typename T>
    void queue<T>::push_back(T data)
    {
        node<T>* new_node = new node<T>();
        new_node->data = data;
        if (head == NULL)
            head = new_node;
        else
        {
            node<T>* cur_node = head;
            while (cur_node->next != NULL)
                cur_node = cur_node->next;
            cur_node->next = new_node;
        }
    }

    template<typename T>
    T queue<T>::front()
    {
        if (head == NULL)
            throw empty();
        return head->data;
    }

    template<typename T>
    T queue<T>::pop_front()
    {
        if (head == NULL)
            throw empty();
        node<T>* front = head;
        head = head->next;
        T data = front->data;
        free(front);
        return data;
    }

    template<typename T>
    int queue<T>::size()
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