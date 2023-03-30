#include<iostream>
using namespace std;

void Rotate( int Arr[], int d, int n)
{
    int temp[n];
    int k = 0;

    for( int i = d; i < n; i++)
    {
        temp[k] = Arr[i];
        k++;
    }

    for( int i = 0; i < d; i++)
    {
        temp[k] = Arr[i];
        k++;
    }

    for( int i = 0; i < n; i++)
    {
        Arr[i] = temp[i];
    }
}

void printArray(int Arr[], int size)
{
    for( int i = 0; i < size; i++)
    {
        cout<< Arr[i] << " ";
    }
}

int main()
{
    int Arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(Arr) / sizeof(Arr[0]);
    int d = 3;

    printArray(Arr, n);

    Rotate(Arr, d, n);

    cout<< "\nRotate Array : ";
    printArray(Arr, n);


    return 0;
}
