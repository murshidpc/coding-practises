#include<bits/stdc++.h>
using namespace std;

bool checkPrime(string s){
    int num =0;
    for(int i=0;i<s.length();i++){
        num += (s[i]-'0')*(pow(10, s.length()-1-i));
    }
    if(num == 0 || num == 1) return false;
    for(int i=2;i<num;i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    int st = 0, e =1; 
    int count =0;
    for(int i=0;i<s.length();i++){
        if(checkPrime(s.substr(st, e-st))){
            count++;
            st = e;
        }
        e++;
    }
    cout<<count<<endl;
    return 0;
}