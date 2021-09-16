#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        int n1 = s1[i]-'0';
        int n2= s2[i] -'0';
        int x = n1^n2;
        cout<<x;
    }
    cout<<endl;
}