#include<iostream>
using namespace std;

void reverseArray( int Arr[], int start, int end)
{
    while(start < end )
    {
        int temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;
        start++;
        end--;
    }
}

void printArray( int Arr[], int size)
{
    for( int i = 0; i < size; i++)
    cout<< Arr[i] << " ";

    cout<< endl;

}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(Arr) / sizeof(Arr[0]);

    printArray(Arr, n);

    reverseArray(Arr, 0, n -1);

    cout<< "Revers Array : " <<endl;
    printArray(Arr, n);


    return 0;
}
