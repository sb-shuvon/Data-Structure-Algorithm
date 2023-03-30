#include<iostream>
using namespace std;

int binarySearch( int arr[], int n, int x)
{
    int left, right, mid;

    left = 0;
    right = n-1;

    while( left <= right)
    {
        mid = ( left + right ) / 2;

        if( arr[mid] = x )
            return mid;
        else if( arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
}

int main()
{
    int arr[50], n, x;

    cout<< "Enter the number of elements : ";
    cin>> n;

    cout<< "Enter your elements : ";
    for( int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    cout<< "Enter your find value : ";
    cin>> x;

    int result = binarySearch(arr, n, x);

    cout<< result;


    return 0;
}
