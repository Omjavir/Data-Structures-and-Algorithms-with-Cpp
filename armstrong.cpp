#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // *** Armstrong number ***
    int n;
    cin >> n;
    int originaln = n;
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        cout << "LastDigit:" << lastdigit << endl;
        sum += pow(lastdigit, 3);
        n = n / 10;
        cout << "New n :" << n << endl;
    }
    if (sum == originaln)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not a armstrong number" << endl;
    }
    return 0;
}