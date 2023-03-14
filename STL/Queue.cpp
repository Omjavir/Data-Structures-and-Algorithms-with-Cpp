#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Queue follows the FIFO(First In First Out) rule
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.emplace(3);
    cout << qu.back() << endl;
    qu.back() += 5;
    cout << qu.back() << endl;
    cout << qu.front() << endl;
    qu.pop();
    cout << qu.front();
    return 0;
}