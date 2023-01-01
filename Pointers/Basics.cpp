// Pointers allows to access and update the vairble.

#include <iostream>
using namespace std;

// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main()
{
    // int a = 10;
    // int *aprt = &a;
    // cout << &a << endl;
    // cout << aprt << endl;
    // cout << *aprt << endl;
    // *aprt = 20;
    // cout << a << endl;

    // int arr[] = {10, 20, 30, 40, 50};
    // // cout << *arr << endl; // returns the first element from array
    // int *aptr = arr;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *(arr + i) << " ";
    // }

    // int a = 20;
    // int b = 40;
    // // swap(a, b); // Will output the original value because it does not updates the value
    // swap(&a, &b); // It will swap the value as Pointers allows to update the original value
    // cout << a << " " << b << endl;
    return 0;
}