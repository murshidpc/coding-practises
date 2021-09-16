#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length()-1;i++){
        cout<<s[i];
        cout<<(s[i]-s[i+1]);
    }
    cout<<s[s.length()-1];
    cout<<endl;
    return 0;
}