#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] < target)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = {2, 5, 8, 12, 18, 24, 32, 42};
    int target = 32;
    int high = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, 0, high, target);
    if (result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index : " << result << endl;
    return 0;
}