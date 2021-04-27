#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void)
{
    int n = 0, m = 0, count = 0;
    set<string> s, s1;
    string str1;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> str1;
        s.insert(str1);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> str1;
        if (s.find(str1) != s.end())
        { //존재
            s1.insert(str1);
            count++;
        }
    }

    cout << count << '\n';
    for (string s : s1)
        cout << s << '\n';

    s1.clear();
    s.clear();

    return 0;
}