#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    map<char, int> m;
    priority_queue<pair<int, char>,vector<pair<int,char>>> pq;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
        pq.push(make_pair(m[s[i]], s[i]));
    }
        cout<<pq.top().second;
    return 0;
}