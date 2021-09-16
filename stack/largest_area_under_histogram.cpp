#include<bits/stdc++.h>
using namespace std;

/*
**brute force
*/
// int largestArea(int histogram[], int n){
//     int Largestarea = histogram[0];
//     for(int i=0;i<n;i++){
//         int min = histogram[i];
//         int width = 2;
//         for(int j=i+1;j<n;j++){
//             if(histogram[j]<min){
//                 min = histogram[j];
//             }
//             int area = width * min;
//             if(area > Largestarea){
//                 cout<<j+1<<"*"<<min<<"="<<area<<endl;
//                 Largestarea = area;
//             }
//             width++;

//         }
//     }
//     return Largestarea;
// }

int largestArea(int hist[],int n){
    stack<int> s;
    int area = 0;
    int max_area = 0;
    int i=0;
    while(i<n){
        if(s.empty() || hist[s.top()]<=hist[i]){
            s.push(i++);
        }else{
            int st = s.top();
            cout<<hist[s.top()]<<endl;
            s.pop();
            area = hist[st]*(s.empty()?i:(i-s.top()-1));
            if(area > max_area){
                max_area = area;
            }
        }
    }
    while (s.empty() == false)
    {
        cout<<i<<endl;
        int st = s.top();
        s.pop();
        area = hist[st] * (s.empty() ? i : 
                                i - s.top() - 1);
  
        if (max_area < area)
            max_area = area;
    }
  
    return max_area;
}


int main(){
    int histogram[7] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(histogram)/sizeof(int);
    cout<<largestArea(histogram, n)<<endl;
    return 0;
}