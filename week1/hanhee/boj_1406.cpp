#include<iostream>
#include<list>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    char op;
    int m;
    cin >> str >> m;
    list<char>l(str.begin(), str.end());
    list<char>::iterator t = l.end();
    // auto t = l.end();

    for(int i=0; i<m; i++){
        cin >> op;
        if(op == 'L' && t!=l.begin()) t--;
        else if(op == 'D' && t!=l.end()) t++;
        else if(op == 'B' && t!=l.begin()) t=l.erase(--t);
        else if(op == 'P') {
            cin >> op;
            l.insert(t,op);
        }
    }
    for(t=l.begin(); t!=l.end(); t++) {
        cout << *t;
    }

    return 0;
}