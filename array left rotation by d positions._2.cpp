#include<iostream>
using namespace std;

void Rotate(int A[], int d, int n)
{
    int p = 1;
    while (p <= d) {
        int last = A[0];
        for (int i = 0; i < n - 1; i++) {
            A[i] = A[i + 1];
        }
        A[n - 1] = last;
        p++;
    }
}

void printArray( int A[], int size)
{
    for( int i = 0; i < size; i++)
        cout<< A[i] << " ";
}

int main()
{
    int A[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(A) / sizeof(A[0]);
    int d = 2;
    printArray( A, n );

    Rotate( A, d, n);

    cout<< "\nRotate Array : ";
    printArray( A, n );


    return 0;
}
