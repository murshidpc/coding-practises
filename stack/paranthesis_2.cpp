#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string S) {
        int n= S.length();
        int i=1;
        stack<int>s;
        string res;
        string fs ="";
        s.push(0);
        while(i<n){
            if(s.empty()){
                s.push(i);
            }
            else if(S[s.top()] == '(' && S[i] == ')' ){
                s.pop();
                if(!s.empty()){
                    res = S.substr(s.top()+1, i-s.top());       
                }else{
                    fs += res;
                }          
            }else{
                s.push(i);               
            }
            i++;
        };
        return fs;
    }

int main(){
    string s = "()()";
    cout<<removeOuterParentheses(s)<<endl;
    return 0;   
}