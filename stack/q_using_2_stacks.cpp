#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Queue {
    stack<T>s1,s2;
    public:
        void push(T x){
            s1.push(x);
        }
        void pop(){
            if(s1.empty()){
                return;
            }
            while (s1.size()>1){
                s2.push(s1.top());
                s1.pop();                
            }
            s1.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            
        }
        bool empty(){
            return s1.empty();
        }
        T front(){
            if(s1.empty()){
                return;
            }
            while (s1.size()>1){
                s2.push(s1.top());
                s1.pop();                
            }
            T element = s1.top();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            return element;
        }
};

int main(){
    Queue<int>q;
    q.push(1);
    q.pop();
    q.pop();
    q.pop();
    // q.push(3);
    // q.push(4);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}