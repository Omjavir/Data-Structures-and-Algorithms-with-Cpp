#include <iostream>
using namespace std;

#define n 100
// PROTOTYPE
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow";
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    stack ok;
    ok.push(1);
    ok.push(2);
    ok.push(3);
    cout << ok.Top() << endl;
    ok.pop();
    cout << ok.Top() << endl;
    ok.pop();
    ok.pop();
    ok.pop();
    cout << ok.Top() << endl;
    cout << ok.empty() << endl;
    return 0;
}