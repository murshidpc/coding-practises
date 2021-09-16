#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int st=0, e=1;
    for(int i=e;i<s.length();i++){
        if( e == s.length()-1){
            for(int k=st;k<=e;k++){
                cout<<s[k];
            }
            cout<<endl;
        }
        if(s[i]>='A'&&s[i]<='Z'){
            for(int j=st;j<e;j++){
                cout<<s[j];
            }
            st=e;
            cout<<endl;
        }
        e++;
    }
    return 0;
}