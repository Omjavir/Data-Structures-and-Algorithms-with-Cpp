#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5, 100);
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " " << endl;
    cout << "Second Element : " << v[1] << endl;
    v.push_back(5);
    cout << "Fifth Element : " << v[5] << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "Size : " << v.size() << endl;

    v.erase(v.begin());
    cout << "After Earsing : ";
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "Size : " << v.size() << endl;

    v.insert(v.begin(), 99);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "Size : " << v.size() << endl;

    v.insert(v.begin() + 1, 3, 200);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "Size : " << v.size() << endl;

    vector<int> copy(2, 2000);
    v.insert(v.begin(), copy.begin(), copy.end());
    for (auto it = v.begin(); it != v.end(); it++)
    { 
        cout << *(it) << " ";
    }
    cout << "Size : " << v.size() << endl;
    return 0;
}