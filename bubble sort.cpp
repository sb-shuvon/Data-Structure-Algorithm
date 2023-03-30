#include<iostream>
using namespace std;

void bubbleSort ( int arr[], int n)
{
    int i, j, temp;

    for( i = 0; i < n; i++)
    {
        for( j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray( int arr[], int n)
{
    for( int i = 0; i < n; i++)
        cout<< arr[i] << " ";
}
int main()
{
    int arr[50], n;

    cout<< "Enter the number of element : ";
    cin>> n;

    cout<< "Enter elements : ";
    for( int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    cout<< "Before Sorting : ";
    printArray( arr, n);

    bubbleSort( arr, n);

    cout<< "\nAfter Sorting : ";
    printArray( arr, n);

    return 0;
}
