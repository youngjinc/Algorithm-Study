#include <iostream>
#include <stack>
#include <string>
using namespace std;

/*
    가장 최소로 만들기 위해 -> -로 만들어야겠다!
    - 뒤에 괄호 연산을 두어 먼저 게산하자
    이렇게 되면 1+1-1+1-1+1 일 때
    1+1-(1+1)-(1+1)이 되는 식
*/

int main()
{
    int result = 0;
    bool minus = false;
    string str = "", temp = "";
    cin >> str;

    for (int i = 0; i <= str.size(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '\0') //숫자가 아닌 경우들
        {
            if (minus)
                result -= stoi(temp);
            else
                result += stoi(temp);
            temp = ""; //더하거나 빼줬으니 다시 초기화
            if (str[i] == '-')
                minus = true;
        }
        else //연산자가 아닌 경우 temp에 이어 붙임 숫자가 53이면 5넣고 3넣고 ..
        {
            temp += str[i];
        }
    }

    cout << result << "\n";

    return 0;
}