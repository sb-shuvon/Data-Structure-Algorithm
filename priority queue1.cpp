#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

int main()
{
    optimize();

    priority_queue<int, vector<int>, greater<int>> q;

    q.push ( 1 );
    q.push ( 2 );
    q.push ( 3 );
    q.push ( 3 );
    q.push ( 4 );
    q.push ( 5 );

    cout << q.top() << endl;

    while ( !q.empty() ) {
        cout << q.top() << endl;
        q.pop();
    }

    cout << q.size() << endl;


    priority_queue<pair<int, int> > pq;

    pq.push ( { 3, -5 } );
    pq.push ( { 1, -6 } );
    pq.push ( { 1, -2 } );
    pq.push ( { 9, -8 } );
    pq.push ( { 2, -1 } );
    pq.push ( { 7, -4 } );

    while ( !pq.empty() ) {
        cout << pq.top().first << " " << pq.top().second * -1 << endl;
        pq.pop();
    }

    cout << pq.size() << endl;



    return 0;
}

