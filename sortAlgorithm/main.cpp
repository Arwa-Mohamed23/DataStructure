#include <iostream>
#include "include/Sort.h"

using namespace std;

template<class T>
void display(T *arr , int size){
    for(int i=0; i<size; i++){
      cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    int arr[]={60,10,20,5,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    //Sort<int>::bubbleSort(arr,size);
    //Sort<int>::selectionSort(arr,size);
    //Sort<int>::insertionSort(arr,size);
    //Sort<int>::mergeSort(arr,0,size-1);
    Sort<int>::quickSort(arr,0,size-1);
    display(arr,size);
    return 0;
}
