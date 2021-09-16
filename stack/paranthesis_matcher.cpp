#include<bits/stdc++.h>
using namespace std;

bool ParanthesisChecker(string s){
   stack<char> st;
   int n = s.size();
   for(int i=0; i<n; i++){
       switch (s[i])
       {
       case '(':
           st.push(s[i]);
           break;
       case ')':
           if(st.empty() or st.top() != '('){
               return false;
           }else{
               st.pop();
           }
           break;   
       
       default:
           continue;
       }
   }
   if(st.empty()){
       return true;
   }else{
       return false;
   }
}

int main(){
    string s = "())";
    if(ParanthesisChecker(s)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}