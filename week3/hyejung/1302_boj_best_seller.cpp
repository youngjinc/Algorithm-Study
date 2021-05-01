#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main(void)
{
    int n = 0, result = 0;
    map<string, int> m;
    string name, result_name;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> name;
        m[name]++;
    }

    for (auto i = m.begin(); i != m.end(); i++)
    {
        result = max(result, i->second);
    }
    for (auto i = m.begin(); i != m.end(); i++)
    {
        if (result == i->second)
        {
            cout << i->first << '\n';
            break;
        }
    }

    return 0;
}