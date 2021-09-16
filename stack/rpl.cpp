#include<bits/stdc++.h>
using namespace std;

int main(){
        char tokens[] = "21+3*";
        stack<int> s;
        for(int i=0;i<5;i++){
            if(tokens[i] == '/' || tokens[i] == '*'|| tokens[i] == '+' || tokens[i] == '-'){
                int first = s.top();
                int second = s.top();
                cout<<first<<" "<<second<<endl;
                int result;
                
                    if(tokens[i] == '/'){ 
                        result = second/first;
                        s.push(result);
                    }
                    else if (tokens[i] == '+'){ 
                        result = second+first;
                        cout<<result<<endl;
                        s.push(result);
                    }
                    else if (tokens[i] == '*'){ 
                        result = second*first;
                        cout<<result<<endl;
                        s.push(result);
                    }
                    else{ 
                        result = second-first;
                        s.push(result);   
                    }
        
            }else{
                s.push(tokens[i]-'0');
            }
        }
        int ans = 0;
        ans = s.top();
        cout<<ans<<endl;
}