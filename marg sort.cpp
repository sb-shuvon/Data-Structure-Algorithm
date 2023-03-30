#include<iostream>
using namespace std;

void merge_sort( int A[], int left, int right)
{
    if( left >= right)
    {
        return;
    }
    int mid = left + (right - left) / 2;

    merge_sort( A, left, mid);
    merge_sort( A, mid + 1, right);

    merge(A, left, mid, right);
}

int main()
{
    int i, n = 8;
    int A[] = {1, 5, 6, 3, 5, 8 ,7 , 2, 9};

    merge_sort( A, 0, n);

    for( i = 0; i <= n; i++)
    {
        cout<< A[i];
    }
    cout<< endl;

    return 0;
}
