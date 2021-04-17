#include<iostream>
#include<string>
#include<stack>
using namespace std;

stack<char> sl, sr;

int main(void){
    
    string str; 
    cin >> str;
    
    for(int i=0; i < str.length(); i++)
        sl.push(str[i]);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        
        char op;
        cin >> op;
        
        if(op == 'L'){
            if(!sl.empty())
            {
                sr.push(sl.top());
                sl.pop();
            }
        }
        else if(op == 'D'){
            if(!sr.empty())
            {
                sl.push(sr.top());
                sr.pop();
            }
        }
        else if(op == 'B'){
            if(!sl.empty())
                sl.pop();
        }
        else {
            char c;
            cin >> c;
            
            sl.push(c);
        }
    }
    
    while(!sl.empty()){
        sr.push(sl.top());
        sl.pop();
    }
    
    string result;
    while(!sr.empty()){
        result += sr.top();
        sr.pop();
    }
    cout << result << endl;
    return 0;
}