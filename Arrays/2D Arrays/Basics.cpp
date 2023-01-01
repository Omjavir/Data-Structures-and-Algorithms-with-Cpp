#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    // // Finding an element in 2d array
    int x;
    cin >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag == true)
    {
        cout << "Element found in 2d array" << endl;
    }
    else
    {
        cout << "Element not found in 2d array" << endl;
    }
    return 0;
}