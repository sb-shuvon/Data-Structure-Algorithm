#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "geeksforgeeks a computer science";
    string str1 = "geeks";

    size_t found = str.find(str1);
    if( found != string::npos)
        cout<< "First occurrence is "<< found <<endl;

    char arr[] = "geeks";
    found = str.find(arr, found+1);
    if(found != string::npos)
        cout<< "Next occurence is "<< found <<endl;


    return 0;
}
