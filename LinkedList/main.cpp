#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList<int> l;
    l.add(10);
    l.add(20);
    l.add(30);
    l.add(40);
    l.add(50);
    l.display();
    cout<<endl<<l.getCount();
    try
    {
        cout<<endl<<l.getDataByIndex(4);
        cout<<endl<<l.getDataByIndex(9);
    }
    catch(char const * msg)
    {
        cout<<msg<<endl;
    }

    try
    {
        l.insertAfter(35,30);
        l.insertBefore(25,10);
    }
    catch(char const * msg)
    {
        cout<<msg<<endl;
    }
    l.display();
    return 0;
}
