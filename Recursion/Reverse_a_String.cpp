#include <iostream>
using namespace std;

void Reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string rs = s.substr(1);
    cout << "RS:" << rs << endl;
    Reverse(rs);
    cout << s[0];
}

int main()
{
    string str;
    cin >> str;
    Reverse(str);
    return 0;
}