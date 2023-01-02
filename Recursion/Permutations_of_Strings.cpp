#include <iostream>
using namespace std;

void Permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string rs = s.substr(0, i) + s.substr(i + 1);
        Permutation(rs, ans + ch);
    }
}

int main()
{
    string str;
    cin >> str;
    Permutation(str, "");
    // Permutation("ABC", "");
    return 0;
}