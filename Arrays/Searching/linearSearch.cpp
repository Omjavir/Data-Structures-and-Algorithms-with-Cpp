#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {2, 5, 9, 12, 23};
    int target = 12;
    int size = sizeof(arr) / (sizeof(arr[0]));
    int result = linearSearch(arr, target, size);
    if (result == -1)
    {
        cout << "Target not found" << endl;
    }
    else
    {
        cout << "Target found at index : " << result << endl;
    }
    return 0;
}