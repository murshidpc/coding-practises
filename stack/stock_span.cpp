#include<bits/stdc++.h>
using namespace std;

int stockSpan(int prices[], int n, int span[]){
    stack<int> s;
    s.push(0);

    span[0] = 1;

    for(int i=1; i<n; i++){
        int currentPrice = prices[i];
        while(!s.empty() and prices[s.top()]<=currentPrice){
            s.pop();
        }
        if(!s.empty()){
            span[i] = i - s.top();
        }else{
            span[i] = i+1; 
        }
        s.push(i);
    }

}


int main(){
    int prices[6] = {100,75,60,45,85,190};
    int n = sizeof(prices)/sizeof(int);
    int span[1000] = {0};

    stockSpan(prices,n,span);

    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }

    return 0;
}