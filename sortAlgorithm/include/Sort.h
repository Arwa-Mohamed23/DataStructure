#ifndef SORT_H
#define SORT_H

template<class T>
class Sort
{
private:
    static void swapitem(T & x, T & y)
    {
        T temp=x;
        x=y;
        y=temp;
    }

    static void merge(T arr[], int l, int r)
    {
        int size=(r-l)+1;
        T *newarr=new int[size];

        for (int i = 0; i < size; i++)
            newarr[i] = arr[i+l];

        int k=l,i=0,m=(size/2)+(size%2),j=m;
        while (i < m && j < size)
        {
            if (newarr[i] <= newarr[j])
            {
                arr[k] = newarr[i];
                i++;
            }
            else
            {
                arr[k] = newarr[j];
                j++;
            }
            k++;
        }

        while (i < m)
        {
            arr[k] = newarr[i];
            i++;
            k++;
        }

        while (j < size)
        {
            arr[k] = newarr[j];
            j++;
            k++;
        }
    }

    static int partition(T arr[], int l, int r)
    {
        T pivot = arr[l];
        int p = l;
        while (l < r)
        {
            do
            {
                l++;
            }
            while (arr[l] <= pivot);

            do
            {
                r--;
            }
            while (arr[r] > pivot);

            if (l < r)
                swapitem(arr[l], arr[r]);
        }
        swapitem(arr[p], arr[r]);
        return r;
    }

public:

    static void bubbleSort(T *arr, int size)
    {
        int sorted=0;
        for(int outer=0; sorted==0; outer++)
        {
            sorted=1;
            for(int i=0; i<size-1-outer; i++)
            {
                if(arr[i]>arr[i+1])
                {
                    swapitem(arr[i],arr[i+1]);
                    sorted=0;
                }
            }
        }
    }

    static void selectionSort(T * arr, int size)
    {
        int minIndex=0;
        for(int outer=0; outer<size-1; outer++)
        {
            minIndex=outer;
            for(int i=outer+1; i<size; i++)
            {
                if(arr[i]<arr[minIndex])
                {
                    minIndex=i;
                }
            }
            swapitem(arr[outer],arr[minIndex]);
        }
    }

    static void insertionSort(T * arr, int size)
    {
        for(int item=1; item<size; item++)
        {
            T key = arr[item];
            int i=item-1;
            while(i>=0 && key<arr[i])
            {
                arr[i+1]=arr[i];
                i--;
            }
            arr[i+1]=key;
        }
    }


    static void mergeSort(T arr[], int l, int r)
    {
        if (l < r)
        {
            int m = (l + r)/ 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, r);
        }
    }

    static void quickSort(T arr[], int l, int r)
    {

        if (l < r)
        {
            int piv = partition(arr, l, r);
            quickSort(arr, l, piv);
            quickSort(arr, piv + 1, r);
        }

    }

};

#endif // SORT_H
