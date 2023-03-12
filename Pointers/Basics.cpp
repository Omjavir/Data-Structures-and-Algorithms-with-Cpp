#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Only declaring a pointer is not a good practice
    int num = 5;
    int *ptr = &num;                                        // Syntax
    cout << "Will print the Value of num" << *ptr << endl;  // Will print the value of num
    cout << "Will print the Address of num" << ptr << endl; // Will print the address of num
    // Since value to pointers are passed by reference
    cout << "Before incrementing : " << *ptr << endl;
    (*ptr)++;
    cout << "After incrementing : " << *ptr << endl;
    int *ptr2 = ptr; // Copying the value of pointer
    cout << "Pointer 2 :" << *ptr2 << endl;

    // Printing the address of the pointer
    cout << "Address of the pointer2 : " << ptr2 << endl;

    // Printing the value of the pointer
    cout << "Before incerementing Pointer 2 :" << *ptr2 << endl;
    (*ptr2)++;
    cout << "After incerementing Pointer 2 :" << *ptr2 << endl;

    // Value of num is also changed
    cout << "NUM : " << num << endl;
    return 0;
}