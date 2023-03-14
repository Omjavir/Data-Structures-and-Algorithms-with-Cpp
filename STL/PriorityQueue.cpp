#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Priority Queue stores element and everytime the largest element is on top of the queue (Sorted from Highest to Lowest)
    priority_queue<int> pq;
    pq.push(1);
    pq.push(12);
    pq.push(5);
    pq.emplace(8);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    return 0;
}