#include <iostream>
using namespace std;

/*
	프렉탈 도형 문제 == 규칙성을 가지는 그림 문제

	N = 3인 경우,
	***
	* *  //가운데 빈 곳 == (1, 1)
	***
	-> 항상 비는 곳은 (1, 1), (1, 4), ... (1, 25)
	조건
	1. 열 % 3 == 1 인 경우
	2. 행 % 3 == 1 인 경우
*/

void star(int row, int col, int n)
{
    if ((row / n) % 3 == 1 && (col / n) % 3 == 1)
        cout << ' ';
    else
    {
        if (n / 3 == 0)
            cout << '*';
        else
            star(row, col, n / 3);
    }
}

int main(void)
{
    int n; //3의 거듭제곱
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            star(i, j, n);
        }
        cout << '\n';
    }

    return 0;
}