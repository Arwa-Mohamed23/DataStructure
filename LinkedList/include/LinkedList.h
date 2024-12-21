#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include"Node.h"

template<class T>
class LinkedList
{
private:
    Node<T> *head;
    Node<T> *tail;
    int counter;
    Node<T>* getData(T data)
    {
        Node<T> * current=head;
        while(current!=nullptr)
        {
            if(current->data==data)
                return current;
            current=current->next;
        }
        return nullptr;
    }
public:
    LinkedList()
    {
        head=nullptr;
        tail=nullptr;
        counter=0;
    }

    void add(T data)
    {
        if(head==nullptr)
        {
            head=new Node(data);
            tail=head;
        }
        else
        {
            tail->next=new Node(data);
            tail->next->prev=tail;
            tail=tail->next;
        }
        counter++;
    }

    void insertAfter(T data, T afterdata)
    {
        Node<T> * current=getData(afterdata);
        if(current==nullptr)
        {
            throw "Data not found";
        }
        if(current==tail)
        {
            add(data);
        }
        else
        {
            current->next->prev=new Node(data);
            current->next->prev->next=current->next;
            current->next=current->next->prev;
            current->next->prev=current;
        }
        counter++;
    }

    void insertBefore (T data, T beforedata)
    {
        Node<T> * current=getData(beforedata);
        if(current==nullptr)
        {
            throw "Data not found";
        }
        if(current==head)
        {
            current=new Node(data);
            head->prev=current;
            current->next=head;
            head=current;
        }
        else
        {
            current->prev->next=new Node(data);
            current->prev->next->prev=current->prev;
            current->prev=current->prev->next;
            current->prev->next=current;
        }
        counter++;
    }

    void display()
    {
        Node<T> * current=head;
        while(current!=nullptr)
        {
            std::cout<<current->data<<"\t";
            current=current->next;
        }
    }

    int getCount()
    {
        return counter;
    }

    T getDataByIndex(int index)
    {
        Node<T> * current=head;
        while(current!=nullptr)
        {
            index--;
            if(!index)
            {
                return current->data;
            }
            current=current->next;
        }
        throw "Index not found";
    }

    void removeData(T data)
    {
        Node<T> * current=getData(data);
        if(current==nullptr)
        {
            throw "Data not found";
        }
        if(current==head&&current==tail)
        {
            head=nullptr;
            tail=nullptr;
        }
        else if(current==head)
        {
            head=head->next;
            head->prev=nullptr;
        }
        else if(current==tail)
        {
            tail=tail->prev;
            tail->next=nullptr;
        }
        else
        {
            current->prev->next=current->next;
            current->next->prev=current->prev;
        }
        delete current;
    }

    void removeAllData(T data)
    {
        try
        {
            while(1)
            {
                removeData(data);
            }
        }
        catch(char const * msg)
        {
            return ;
        }
    }

    ~LinkedList()
    {
        while (head != nullptr)
        {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }


};

#endif // LINKEDLIST_H
