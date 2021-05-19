#include <iostream>
using namespace std;

/*비트마스킹을 이용하여 TSP 문제 풀기
  한 도시에서 출발 -> 모든 도시를 들러 -> 다시 처음 도시로 도착

  int dosi[1<<4]; //4개짜리 도시 존재
  4개 도시 모두 방문 -> 1111. 10진수로 표현하면 15, 2진수로 표현하면 16 
  그래서 '모든 도시를 방문 == (1 << 도시수) - 1'로 표현 */

const int INF = 1987654321;
int n;
int w[16][16];
int dp[16][1 << 16]; //최대 16개의 도시 존재 dp[i][j]는 i -> j로 가는 최소비용

int tsp_dfs(int cur, int visited) //현재가 cur, cur를 포함하여 방문한 도시 visited
{
    int min_cost = dp[cur][visited]; //가장 짧은 경로를 min_cost로 둠
    if (min_cost != 0)
        return min_cost; //종료 조건(최소 경로를 다 구했다면 return)

    //모든 마을을 방문했다면
    if (visited == (1 << n) - 1)
    {
        //처음 도시(0)으로 돌아가
        if (w[cur][0] != 0)
            return w[cur][0];
        else
            return INF;
    }

    min_cost = INF;
    for (int next = 0; next < n; next++)
    {
        //방문 했던 도시를 또 감(1) || 길이 없음(2)
        if (visited & (1 << next) || w[cur][next] == 0)
            continue;
        min_cost = min(min_cost, dp[cur][next] + tsp_dfs(next, visited | 1 << next));
    }
    dp[cur][visited] = min_cost; //최소값으로 방문 배열에 Memoization
    return min_cost;
}

int main(void)
{
    cin >> n;

    //input
    for (int row = 0; row < n; row++)
        for (int col = 0; col < n; col++)
            cin >> w[row][col];

    cout << tsp_dfs(0, 1);

    return 0;
}