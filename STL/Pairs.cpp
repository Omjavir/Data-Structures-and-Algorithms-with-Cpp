#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> nums = {5, 4};
    cout << "First Pair Element :" << nums.first << " Second Pair Element :" << nums.second << endl;

    // If elements of pair are more than 2 then use nested pairs
    pair<int, pair<int, int>> nestedNums = {2, {6, 9}};
    cout << "First Pair Element :" << nestedNums.first << " Nested Pair First Element :" << nestedNums.second.first << " Nested Pair Second Element :" << nestedNums.second.second << endl;

    // Storing arrays in pairs
    pair<int, int> pairWithArray[] = {{2, 4}, {5, 8}};
    cout << "First Array Pair :" << pairWithArray[0].first << " Second Array Pair :" << pairWithArray[0].second << endl;
    return 0;
}