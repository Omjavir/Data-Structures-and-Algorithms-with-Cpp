#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    // cin >> n;
    for (int i = 0; i < n; i++)
    {
        // For space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // For characters
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        // For space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}