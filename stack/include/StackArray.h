#ifndef STACKARRAY_H
#define STACKARRAY_H

template <class T>
class StackArray
{
private:
    int top;
    int size;
    T * items ;
public:

    StackArray(int size)
    {
        this->size=size;
        top=0;
        items= new T[size];
    }

    void push(T data)
    {
        if(top==size)
        {
            throw "Stack is FULL";
        }
        items[top++]=data;
    }

    void pop()
    {
        if(!top)
        {
            throw "Stack is empty";
        }
        top--;
    }

    T peak(){
        if(!top)
        {
            throw "Stack is empty";
        }
        return items[top-1];
    }

    void display()
    {
        if(!top)
        {
            throw "Stack is empty!";
        }
        for(int i=top-1; i>=0; i--)
        {
            cout<<items[i]<<" ";
        }
        cout<<endl;
    }

    ~StackArray()
    {
        delete []items;
    }
};

#endif // STACKARRAY_H
