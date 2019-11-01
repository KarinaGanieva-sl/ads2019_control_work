#include "my_list.h"
//#include "stdafx.h
#include <ctime>
#include <iostream>

using namespace std;

namespace xi {
    int randInt(int a, int b)
    {
        srand( time(0) );
        return rand() % (b-a + 1) + a;
    }
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

    void List::createList(int length)
    {
        _length = length;
        srand( time(0) );
        Node* node = new Node(randInt(0,50));
        _head = node;
        for(int i = 2; i <= length; i++)
        {
            Node* now = new Node(randInt(0,50));
            node->_next = now;
            node = now;
        }
        node->_next = _head;
    }
    void List::printList(Node* head)
    {
        Node* con = head;
        while(head != nullptr)
        {
            cout << head->_value << " ";
            head = head->_next;
            if(head == con)
                return;
        }
        cout<<"\n";
    }
    void List::print()
    {
        cout<<"Исходный связный циклический список имеет SP( L = "<<_length<<" имеет вид:"<<"\n";
        printList(_head);
        split();
        cout<<"Список SP1: ";
        printList(_head1);
        cout<<"Список SP2: ";
        printList(_head2);
    }
    Node* List::search(int index)
    {
        Node* node = _head;
        for(int i = 2; i <= index; i++){
            node = node->_next;
        }
        return node;
    }
    void List::split()
    {
        int len = _length % 2 + _length / 2;
        _head1 = _head;
        search(len)->_next = _head1;
        _head2 = search(len + 1);
        search(_length)->_next = _head2;
        _head = nullptr;
    }
} // namespace xi