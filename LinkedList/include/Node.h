#ifndef NODE_H
#define NODE_H

template<class T>
class Node
{
public:
    T data;
    Node *prev;
    Node *next;
    Node(T data)
    {
        this->data=data;
        this->prev=nullptr;
        this->next=nullptr;
    }
    ~Node() {}

protected:

private:
};

#endif // NODE_H
