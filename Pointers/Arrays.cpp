#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {12, 18, 22, 25, 31};
    int size = sizeof(arr);
    int *firstEl = &arr[0];
    cout << firstEl << endl;
    cout << "Size of first element : " << sizeof(firstEl) << endl;
    cout << "Size :" << size << endl;

    int *arrPtr = &arr[0];
    cout << "arrPtr = " << arrPtr << endl;  // Without * it will print the address of the element
    cout << "arrPtr = " << *arrPtr << endl; // With * it will print the value of the element

    // cout << arr << endl;     // This will print the address of first element
    // cout << arr[0] << endl;  // This will print the the value of first element
    // cout << &arr[0] << endl; // This will print the address of the first element
    // cout << &arr[1] << endl; // This will print the address of the second element

    cout << *arr << endl;       // This will print the value of first element
    cout << *arr + 1 << endl;   // This will print the value of first element + 1
    cout << *(arr + 1) << endl; // This will print the value of second element
    cout << *(arr + 2) << endl; // This will print the value of third element

    // The formula is arr[i] = *(arr + i)
    // OR
    // The formula is i[arr] = *(i + arr)

    int i = 4;
    cout << "With * : " << *(arr + i) << endl; // This will print the value of fourth element
    cout << "With i : " << i[arr] << endl;     // This will print the fourth element
    return 0;
}