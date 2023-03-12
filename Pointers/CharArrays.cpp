#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Pointers work differently with character arrays
    int arr[10] = {10, 30, 50, 90};
    char chArr[10] = "abcdef";
    cout << arr << endl;   // Will print the address of the first element
    cout << chArr << endl; // Will print the whole character array

    int *arrPtr = &arr[0];
    char *chPtr = &chArr[0];
    cout << "Address of first element of int array : " << arrPtr << endl;
    cout << "Value of char array : " << chPtr << endl;

    cout << "value of first element of int array : " << *arrPtr << endl;
    cout << "Value of first element char array : " << *chPtr << endl;
    return 0;
}