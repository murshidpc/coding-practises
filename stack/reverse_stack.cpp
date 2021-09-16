#include <bits/stdc++.h>
using namespace std;

void reverseStack(stack<int> &s1)
{
    int i = 0;
    int n = s1.size();
    stack<int> temp;
    while (s1.size() - i > 0)
    {
        int x = s1.top();
        s1.pop();
        for(int j=0; j< n-i-1; j++)
        {
            temp.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!temp.empty())
        {
            s1.push(temp.top());
            temp.pop();
        }
        i++;
    }
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    // cout << "Before Reversing" << endl;
    // while (!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }
    reverseStack(s);
    cout << "After Reversing" << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}