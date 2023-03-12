#include <bits/stdc++.h>
using namespace std;

// void print(int *ptr)
// {
//     cout << ptr << endl; // Will print address
//     cout << *ptr << endl; // Will print value
// }

void update(int *ptr)
{
    // ptr = ptr + 1;   // Address
    *ptr = *ptr + 1; // Value
    // cout << "Inside :" << ptr << endl; // It will only update the address inside the function

    cout << "Inside : " << *ptr << endl; // will update the value both inside and outside the function
}

int main()
{
    int num = 5;
    int *ptr = &num;
    // print(ptr);
    // ***** Address updated will only be showin inside the function
    // cout << "Before : " << ptr << endl; // Will print the address
    // **** Value updated will be shown in both inside and outside the function because the original value is updated
    cout << "Before : " << *ptr << endl; // Will print the value
    update(ptr);
    // ***** Address updated will only be showin inside the function
    // cout << "After : " << ptr << endl; // Will print the address
    // **** Value updated will be shown in both inside and outside the function because the value is updated
    cout << "After : " << *ptr << endl; // Will print the value
    return 0;
}