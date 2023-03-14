#include <bits/stdc++.h>
using namespace std;
int main()
{
    // All function and working is as same as of vectos except the push_front and emplace_front
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);

    ls.push_front(10); // Pushes the value in the front of an array
    ls.emplace_front(20); // Pushes the value in the front of an array

    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *(it) << " ";
    }
    return 0;
}