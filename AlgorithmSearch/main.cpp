#include <iostream>

using namespace std;
#include"../LinkedList/include/LinkedList.h"

template<class T>
LinkedList<int> linearSearch(T *arr,int size,T item){
    LinkedList<int> l;
    for(int i=0;i<size;i++){
        if(arr[i]==item){
            l.add(i+1);
        }
    }
    return l;
}

void bubbleSort(int *arr , int size){
    int sorted=0;
    for(int outer=0; sorted==0; outer++){
        sorted=1;
        for(int i=0; i<size-1-outer; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                sorted=0;
            }
        }
    }
}



void display(int *arr , int size){
    for(int i=0; i<size; i++){
      cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
    int arr[5]={5,9,4,9,9};
    LinkedList<int>res=linearSearch(arr,5,9);
    if(res.getCount()==0){
        cout<<"data not found";
    }
    res.display();
    cout<<endl;
    bubbleSort(arr,5);
    display(arr,5);
    return 0;
}
