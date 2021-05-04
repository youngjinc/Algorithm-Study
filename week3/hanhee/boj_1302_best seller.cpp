#include<iostream>>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    int result=0;
    int n;
    cin >> n;
    map<string, int> m;
    string str;
    while (n--)
    {
        cin >> str;
        m[str]++;
    }
    for(auto i= m.begin(); i!=m.end(); i++){
        result = max(result, i->second);
    }
    for(auto j= m.begin(); j!=m.end(); j++){
        if(result == j->second) {
            cout << j->first;
            return 0;
        }
    }
    
    return 0;
}