#include <bits/stdc++.h>
using namespace std;
int main()
{
    // All function and working is as same as of vectos except the push_front and emplace_front
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);

    dq.push_front(10); // Pushes the value in the front of an array
    dq.emplace_front(20); // Pushes the value in the front of an array

    dq.pop_back(); // Deletes an element from end
    dq.pop_front(); // Deletes an elemnet from front

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *(it) << " ";
    }
    return 0;
}