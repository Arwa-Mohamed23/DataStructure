#ifndef QUEUELINKEDLIST_H
#define QUEUELINKEDLIST_H

#include"Node.h"
template <class T>
class QueueLinkedList
{
private:
    Node<T> *front;
    Node<T> *rear;
public:
    QueueLinkedList()
    {
        front=nullptr;
        rear=nullptr;
    }

    void enQueue(T data)
    {
        if(rear==nullptr)
        {
            rear=new Node(data);
            front=rear;
        }
        else
        {
            rear->next=new Node(data);
            rear=rear->next;
        }
    }

    void display()
    {
        Node<T> * current=front;
        while(current!=nullptr)
        {
            std::cout<<current->data<<"\t";
            current=current->next;
        }
    }

    void deQueue()
    {
        if(front==nullptr)
        {
            throw "Queue is empty";
        }
        Node<T> * current=front;
        if(front==rear)rear=nullptr;
        front=front->next;
        delete current;
    }

    T Getfront(){
        if(front==nullptr)
        {
            throw "Queue is empty";
        }
        return front->data;
    }

    T GetRear(){
        if(rear==nullptr)
        {
            throw "Queue is empty";
        }
        return rear->data;
    }

    ~QueueLinkedList()
    {
        while(front!=nullptr)
        {
            Node<T> * current=front;
            front=front->next;
            delete current;
        }
    }
};

#endif // QUEUELINKEDLIST_H
