#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    vector<int> v;

public:
    void insertion(int x)
    {
        v.push_back(x);
    }
    void pop()
    {
        if (!v.empty())
            v.pop_back();
    }
    int top()
    {
        int x = v[v.size() - 1];
        return x;
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{

    Stack s;
    s.insertion(2);
    s.insertion(3);
    s.insertion(4);
    s.pop();
    cout << s.top() << endl;
    cout << s.empty() << endl;
    s.pop();
    cout << s.empty() << endl;
    s.pop();
    cout << s.empty() << endl;

    return 0;
}