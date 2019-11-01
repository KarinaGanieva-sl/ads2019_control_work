#include "my_list.h"
//#include "stdafx.h"
#include <iostream>

using namespace std;

namespace xi {

    Node::Node(int value)
    {
        _value = value;
        _next = nullptr;
    }
    List::List()
    {
        _head = nullptr;
    }
    bool List::isEmpty()
    {
        return _head == nullptr;
    }
    void List::add(int value)
    {
        Node* node = new Node(value);
        if(isEmpty())
            _head = node;
        else
            _tail->_next = node;
        _tail = node;
    }
    void List::print()
    {
        cout<<rand()%4;
        if(isEmpty())
            std::cout<<"empty\n";
        Node* now = _head;
        while(now != nullptr)
        {
            cout<<now->_value<<"->";
            now = now->_next;
        }
        cout<<"\n";
    }
    Node* List::findByValue(int value)
    {
        if(isEmpty())
            return nullptr;
        Node* now = _head;
        while(now != nullptr)
        {
            if(now->_value == value || now == nullptr)
                return now;
            now = now->_next;
        }
    }
    void List::insertByValue(int value, Node* node)
    {
        if(isEmpty())
            return;
        Node* now = findByValue(value);
        if(now == nullptr)
            return;
        node->_next = now->_next;
        now->_next = node;
    }
    void List::deleteByValue(int value)
    {
        Node* node = findByValue(value);

    }
} // namespace xi