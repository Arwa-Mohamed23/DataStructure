#include <iostream>

using namespace std;
#include "QueueLinkedList.h"
#include "circularQueue.h"
int main()
{
    QueueLinkedList<char>q;
    q.enQueue('a');
    q.enQueue('b');
    q.enQueue('c');
    q.enQueue('d');
    q.display();
    cout<<endl;
    cout<<"front: "<<q.Getfront()<<"\trear: "<<q.GetRear()<<endl;
    cout<<"================================\n";
    try
    {
        q.deQueue();
        q.display();
        cout<<endl;
        cout<<"front: "<<q.Getfront()<<"\trear: "<<q.GetRear()<<endl;
        cout<<"================================\n";
        q.deQueue();
        q.display();
        cout<<endl;
        cout<<"front: "<<q.Getfront()<<"\trear: "<<q.GetRear()<<endl;
        cout<<"================================\n";
        q.deQueue();
        q.display();
        cout<<endl;
        cout<<"front: "<<q.Getfront()<<"\trear: "<<q.GetRear()<<endl;
        cout<<"================================\n";
        q.deQueue();
        q.deQueue();
        cout<<endl;
        cout<<"front: "<<q.Getfront()<<"\trear: "<<q.GetRear()<<endl;
        cout<<"================================\n";
    }
    catch(const char*msg)
    {
        cout<<msg<<endl;
    }

    /*circularQueue<char>q(5);
    try
    {
        q.enQueue('a');
        q.enQueue('b');
        q.enQueue('c');
        q.enQueue('d');
        q.enQueue('e');
        q.enQueue('f');
    }
    catch(const char*msg)
    {
        cout<<msg<<endl;
    }
    q.display();
    cout<<endl;
    cout<<"front: "<<q.Getfront()<<"\trear: "<<q.GetRear()<<endl;
    cout<<"================================\n";
    try
    {
        q.deQueue();
        q.display();
        cout<<endl;
        cout<<"front: "<<q.Getfront()<<"\trear: "<<q.GetRear()<<endl;
        cout<<"================================\n";
        q.deQueue();
        q.display();
        cout<<endl;
        cout<<"front: "<<q.Getfront()<<"\trear: "<<q.GetRear()<<endl;
        cout<<"================================\n";
        q.deQueue();
        q.display();
        cout<<endl;
        cout<<"front: "<<q.Getfront()<<"\trear: "<<q.GetRear()<<endl;
        cout<<"================================\n";
        q.deQueue();
        q.display();
        cout<<endl;
        cout<<"front: "<<q.Getfront()<<"\trear: "<<q.GetRear()<<endl;
        cout<<"================================\n";
    }
    catch(const char*msg)
    {
        cout<<msg<<endl;
    }
    try
    {
        q.enQueue('a');
        q.enQueue('b');
        q.enQueue('c');
        q.enQueue('d');
        q.enQueue('e');
        q.enQueue('f');
    }
    catch(const char*msg)
    {
        cout<<msg<<endl;
    }
    q.display();*/
    return 0;
}
