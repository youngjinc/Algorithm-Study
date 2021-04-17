#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
    int n = 0, i = 1, num = 0;
    string s1;
    stack<int> stack;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s1;
        if (s1 == "push")
        {
            cin >> num;
            stack.push(num);
        }
        else if (s1 == "pop")
        {
            if (stack.empty())
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << stack.top() << endl;
                stack.pop();
            }
        }
        else if (s1 == "size")
        {
            cout << stack.size() << endl;
        }
        else if (s1 == "empty")
        {
            if (stack.empty())
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
        else if (s1 == "top")
        {
            if (stack.empty())
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << stack.top() << endl;
            }
        }
    }

    return 0;
}