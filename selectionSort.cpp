#include<iostream>
using namespace std;

void selectionSort( int arr[], int n)
{
    int i, j, idx_min, temp;

    for( i = 0; i < n-1; i++)
    {
        idx_min = i;
        for ( j = i + 1; j < n; j++)
        {
            if( arr[j] < arr[idx_min])
                idx_min = j;
        }

        if( idx_min != i)
        {
            temp = arr[i];
            arr[i] = arr[idx_min];
            arr[idx_min] = temp;
        }

    }


}

void printArray( int arr[], int size)
{
    for( int i = 0; i < size; i++)
        cout<< arr[i] << " ";
}

int main()
{
    int arr[50], n;

    cout<< "Enter the number of elements : ";
    cin>> n;

    cout<< "Enter elements : ";
    for( int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    cout<< "Before Sorting : ";
    printArray( arr, n);

    selectionSort( arr, n);

    cout<< "\nAfter Sorting : ";
    printArray( arr, n);


    return 0;
}
