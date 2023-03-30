#include<iostream>
using namespace std;

int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

int main()
{
    string s1 = "for";
    string s2 = "geeksforgeeks";

    int result = isSubstring(s1, s2);

    if(result == -1)
        cout<< "Not present";
    else
        cout<< "Present at index "<<result;


    return 0;
}
