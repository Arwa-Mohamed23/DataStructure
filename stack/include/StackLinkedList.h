#ifndef STACKLINKEDLIST_H
#define STACKLINKEDLIST_H

#include "Node.h"
template<class T>
class StackLinkedList
{
private:
    Node<T> *top;
public:
    StackLinkedList()
    {
        top=nullptr;
    }
    ~StackLinkedList()
    {
        while(top!=nullptr)
        {
            Node<T> * current=top;
            top=top->prev;
            delete current;
        }
    }
    void push(T data)
    {
        if(top==nullptr)
        {
            top=new Node(data);
        }
        else
        {
            Node<T> *newnode = new Node(data);
            newnode->prev=top;
            top=newnode;
        }
    }

    void display()
    {
        Node<T> * current=top;
        while(current!=nullptr)
        {
            std::cout<<current->data<<"\t";
            current=current->prev;
        }
    }

    void pop()
    {
        if(top==nullptr)
        {
            throw "Stack is empty";
        }
        Node<T> * current=top;
        top=top->prev;
        delete current;
    }

    T peak(){
        if(top==nullptr)
        {
            throw "Stack is empty";
        }
        return top->data;
    }
};

#endif // STACKLINKEDLIST_H
