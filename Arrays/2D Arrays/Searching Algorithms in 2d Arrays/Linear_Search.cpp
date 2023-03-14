#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<vector<int>> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Row :" << i << " Column :" << j << endl;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    vector<vector<int>> arr = {{3, 12, 9}, {5, 2, 89}, {90, 45, 22}};
    int target = 90;
    int result = linearSearch(arr, target);
    if (result == 1)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}