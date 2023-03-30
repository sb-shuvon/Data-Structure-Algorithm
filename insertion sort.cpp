#include<iostream>
using namespace std;

void insertionSort( int arr[], int n)
{
    int i, j, item;

    for( i = 1; i < n; i++)
    {
        item = arr[i];
        j = i - 1;

        while( j >= 0 && arr[j] > item)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = item;
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
}

int main()
{
    int arr[50], n;

    cout<< "Enter the number of elements : ";
    cin >> n;

    cout<< "Enter the elements : ";
    for ( int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    cout<< "Before sorting : ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout<< "\nAfter sorting : ";
    printArray(arr, n);


    return 0;
}
