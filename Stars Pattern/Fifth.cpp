#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    // cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}