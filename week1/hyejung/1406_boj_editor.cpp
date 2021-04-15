#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
    //stack 2개 배치하여 왼쪽, 오른쪽 커서 나눔
    int n = 0;
    string s = "";
    char c, tmp;
    stack<char> s1, s2; //s1은 왼쪽, s2는 오른쪽

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        s1.push(s[i]); //우선 왼쪽에 다 넣어둠
    }

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> c; // P, L, D, B
        if (c == 'P')
        { //
            cin >> tmp;
            s1.push(tmp);
        }
        else if (c == 'L')
        {
            if (s1.empty())
                continue;
            else
            {
                tmp = s1.top();
                s1.pop();
                s2.push(tmp);
            }
        }
        else if (c == 'D')
        {
            if (s2.empty())
                continue;
            else
            {
                tmp = s2.top();
                s2.pop();
                s1.push(tmp);
            }
        }
        else if (c == 'B')
        {
            if (s1.empty())
                continue;
            else
            {
                s1.pop();
            }
        }
    }

    while (!s1.empty())
    { //맨 왼쪽을 비워버림
        tmp = s1.top();
        s1.pop();
        s2.push(tmp);
    }

    while (!s2.empty())
    { //output
        tmp = s2.top();
        cout << tmp;
        s2.pop();
    }

    return 0;
}
