#include<iostream>
using namespace std;

int linearSearch(int n, int arr[], int x)
{
    for( int i = 0; i < n; i++)
    {
        if( arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int n, arr[50], x;

    cout<< "Enter the number of elements : ";
    cin>> n;

    cout<< "Enter Elements : ";
    for( int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    cout<< "Enter your find value : ";
    cin>> x;

    int result = linearSearch(n, arr, x);

    if(result == -1)
        cout<< "Item is not found in this array : ";
    else
        cout<< "Item is found in index : " << result;


    return 0;
}
