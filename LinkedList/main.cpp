#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList<char> l;
    l.add('a');
    l.add('b');
    l.add('c');
    l.add('d');
    l.add('e');
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
        l.insertAfter('h','d');
        l.insertBefore('h','a');
    }
    catch(char const * msg)
    {
        cout<<endl<<msg<<endl;
    }
    cout<<"linked list after insert: "<<endl;
    l.display();
    try
    {
        l.removeData('e');
        l.removeData('z');
    }
    catch(char const * msg)
    {
        cout<<endl<<msg<<endl;
    }
    cout<<"linked list after delet: "<<endl;
    l.display();
    cout<<endl;
    l.removeAllData('h');
    cout<<"linked list after delet: "<<endl;
    l.display();
    return 0;
}
