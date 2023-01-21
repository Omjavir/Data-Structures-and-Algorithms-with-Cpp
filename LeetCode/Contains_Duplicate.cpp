class Solution
{
public:
    bool containsDuplicate(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        bool flag = false;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] == arr[i + 1])
                return true;
        }
        return flag;
    }
};