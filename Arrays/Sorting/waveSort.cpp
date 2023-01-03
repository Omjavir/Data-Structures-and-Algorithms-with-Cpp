#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 5, 8, 4, 3, 5, 9};
    waveSort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}