#include <iostream>
#include <vector>
using namespace std;

// "s" stands for initial sum
void patternSubs(int i, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (i == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    patternSubs(i + 1, ds, s, sum, arr, n);
    s -= arr[i];
    ds.pop_back();
    patternSubs(i + 1, ds, s, sum, arr, n);
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    patternSubs(0, ds, 0, sum, arr, n); // "0" in 3rd position stands for initial value of sum
    return 0;
}