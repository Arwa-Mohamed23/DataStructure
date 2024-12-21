#include <iostream>

using namespace std;
#include"../LinkedList/include/LinkedList.h"
#include "../sortAlgorithm/include/Sort.h"

template<class T>
LinkedList<int> linearSearch(T *arr,int size,T item)
{
    LinkedList<int> l;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==item)
        {
            l.add(i+1);
        }
    }
    return l;
}

template<class T>
int BinarySearch(T arr[],int size,T item)
{
    int start=0,end=size-1,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]<item)
        {
            start=mid+1;
        }
        else if(arr[mid]>item)
        {
            end=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    /*int arr[]= {5,9,4,9,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    LinkedList<int>res=linearSearch(arr,size,9);
    if(res.getCount()==0)
    {
        cout<<"data not found";
    }
    res.display();
    cout<<endl;
    Sort<int>::bubbleSort(arr,size);
    cout<<BinarySearch(arr,size,5);*/
    LinkedList<int> l;
    l.add(10);
    l.add(5);
    l.add(20);
    l.add(30);
    l.add(25);
    l.display();
    l.bubbleSort();
    l.display();
    cout<<l.BinarySearch(20);
    return 0;
}
