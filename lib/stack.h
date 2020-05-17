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

}