#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    // cin>>n;
    int initialSpace = 0;
    for (int i = 0; i < n; i++)
    {
        // For stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // For spaces
        for (int j = 0; j < initialSpace; j++)
        {
            cout << " ";
        }
        // For stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        initialSpace += 2;
        cout << endl;
    }
    initialSpace = 8;
    for (int i = 1; i <= n; i++)
    {
        // For stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // For spaces
        for (int j = 0; j < initialSpace; j++)
        {
            cout << " ";
        }
        // For stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        initialSpace -= 2;
        cout << endl;
    }
    return 0;
}