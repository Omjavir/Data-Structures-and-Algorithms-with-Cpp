#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<vector<int>> arr, int target)
{
    
    return 0;
}

int main()
{
    vector<vector<int>> arr = {{3, 12, 9}, {5, 2, 89}, {90, 45, 22}};
    int target = 90;
    int result = binarySearch(arr, target);
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