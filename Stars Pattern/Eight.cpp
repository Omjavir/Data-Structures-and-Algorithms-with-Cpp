#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    // cin >> n;
    for (int i = 0; i < n; i++)
    {
        // For space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // For star
        for (int j = 0; j < (2 * n - (2 * i + 1)); j++)
        {
            cout << "*";
        }
        // For space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}