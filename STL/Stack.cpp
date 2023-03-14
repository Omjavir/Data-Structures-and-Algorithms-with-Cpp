#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Stacks follow the LIFO(Last In First Out) rule
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    st.pop(); // Pops an element from top
    cout << st.top() << endl;
    cout << st.empty();
    return 0;
}