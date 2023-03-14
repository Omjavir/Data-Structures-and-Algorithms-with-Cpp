#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3], int target, int m, int n)
{
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sumOfRow(int arr[][3], int m, int n)
{
    for (int row = 0; row < m; row++)
    {
        int sum = 0;
        for (int col = 0; col < n; col++)
        {
            sum += arr[row][col]; // For row vise sum
            // sum += arr[col][row]; // For colums vise sum
        }
        cout << sum << endl;
    }
}

int main()
{
    int arr[3][3];
    // Taking input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Taking outout
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " "; // For row vise output
            // cout << arr[j][i] << " "; // For column vise output
        }
        cout << endl;
    }

    // cout << "Sum of row is : " << endl;
    // sumOfRow(arr, 3, 3);

    /*
    // Linear search
    cout << "Enter the element you want to search :" << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 3))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    */

    return 0;
}