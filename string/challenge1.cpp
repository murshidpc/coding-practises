#include<bits/stdc++.h>
using namespace std;

string extractTokenAtKey(string str, int key){
    char *s = strtok((char *)str.c_str(), " ");
    while(key>1){
        s = strtok(NULL, " ");
        key--;
    }
    return (string)s;
};

int convertToInt(string s){
    int num = 0;
    int p =1;
    for(int i=s.length()-1;i<=0;i--){
        num += (s[i]-'0')*p;
        p *= 10;
    }
    return num;
}

bool numericCompare(pair<string, string> s1, pair<string, string>s2){
    string key1 = s1.second;
    string key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

bool lexicoCompare(pair<string, string> s1, pair<string, string>s2){
    string key1 = s1.second;
    string key2 = s2.second;

    return key1 < key2;
}

int main(){
    int n;
    cin>>n;
    cin.get();
    string s[n];
    for(int i=0;i<n;i++){
        getline(cin, s[i]);
    }
    int key;
    string reverse;
    string compareType;
    cin>>key>>reverse>>compareType;

    pair<string, string> strPair[100];
    for(int i=0;i<n;i++){
        strPair[i].first = s[i];
        strPair[i].second = extractTokenAtKey(s[i], key);
    }

    if(compareType == "numeric"){
        sort(strPair, strPair+n, numericCompare);
    }else{
        sort(strPair, strPair+n, lexicoCompare);
    }

    if(reverse == "true"){
        for(int i=0;i<n/2;i++){
            swap(strPair[i], strPair[n-i-1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<strPair[i].first<<endl;
    }

    return 0;
}