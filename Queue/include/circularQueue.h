#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

template <class T>
class circularQueue
{
private:
    int rear;
    int front;
    int size;
    T * items;
public:

    circularQueue(int size)
    {
        this->size=size;
        rear=front=-1;
        items= new T[size];
    }

    void enQueue(T data)
    {
        if ((rear + 1) % size == front)
        {
            throw "Queue is Full";
        }
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }
        items[rear] = data;
    }

    void display()
    {
        if(front==-1)
        {
            throw "Queue is empty";
        }
        for(int i=front; i!=rear; i=((i+1)%size))
        {
            cout<<items[i]<<"\t";
        }
        cout<<items[rear];
    }

    void deQueue()
    {
        if(front==-1)
        {
            throw "Queue is empty";
        }
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%size;
        }
    }

    T Getfront()
    {
        if(front==-1)
        {
            throw "Queue is empty";
        }
        return items[front];
    }

    T GetRear()
    {
        if(rear==-1)
        {
            throw "Queue is empty";
        }
        return items[rear];
    }

    ~circularQueue()
    {
        delete []items;
    }
};

#endif // CIRCULARQUEUE_H
