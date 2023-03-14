#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    // Row and Col sizes
    int row = matrix.size();
    int col = matrix[0].size();
    // Initial values
    int start = 0;
    int end = row * col - 1;
    // Iteration
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int element = matrix[mid / col][mid % col];
        if (element == target)
        {
            cout << "Row :" << mid / col << " Column :" << mid % col << endl;
            return 1;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main()
{
    vector<vector<int>> arr = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 23;
    int result = searchMatrix(arr, target);
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