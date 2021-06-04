#include <iostream>
#include <algorithm>
using namespace std;

/******배열 생성하여 정렬 -> 시간초과!!!
    n = 3, k = 7 일 때 (output == 6 )
    1 2 3 
    2 4 8
    3 6 9     

    == k번째 원소는 K보다 같거나 작을 수 밖에 없는 구조
 */

int main(void)
{
    int n, k;
    cin >> n >> k;

    int left, right, mid, result;
    result = 0;
    left = 1;
    right = k; //k번째 수가 k보다 클 순 없으므로
    while (left <= right)
    {
        mid = (left + right) / 2;
        long long num = 0; //longlong인 이유는 n이 될 수도 있으므로?
        for (int i = 1; i <= n; i++)
            num += min(mid / i, n); //k보다 작은 수를 구해서 모두 더함
        if (num < k)                //num < k == k보다 작은 수들의 개수가 k보다 작음
            left = mid + 1;
        else
        {
            result = mid;
            right = mid - 1;
        }
    }

    cout << result;

    return 0;
}