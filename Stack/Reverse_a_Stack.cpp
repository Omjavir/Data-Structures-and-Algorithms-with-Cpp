#include <iostream>
#include <stack>
using namespace std;

void inserAtBottom(stack<int> &st, int el)
{
    if (st.empty())
    {
        st.push(el);
        return;
    }
    int topEl = st.top();
    st.pop();
    inserAtBottom(st, el);
    st.push(topEl);
}

void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int el = st.top();
    st.pop();
    reverse(st);
    inserAtBottom(st, el);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}