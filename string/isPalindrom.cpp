#include<bits/stdc++.h>
using namespace std;

bool check(int arr[], int n, int size){
    if(arr[n-1] != arr[size -n]) return false;
    if(n == size/2) return true;
    check(arr, n+1, size);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x = check(arr, 1, n);
    x == 0 ? cout<<"false": cout<<"true";
    cout<<endl;
    return 0;
}