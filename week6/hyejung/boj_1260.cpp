#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>
#include <algorithm>
using namespace std;

int n = 0, m = 0, v = 0;
vector<int> adj[1001]; //인접행렬
bool visit[1001];      //방문여부
queue<int> q;          //bfs를 위한 큐

void dfs(int cur)
{
    /*깊이 우선 탐색 
      adj[i][1] ~ adj[i][V]를 전부 확인 */
    visit[cur] = true;  //방문
    cout << cur << ' '; //방문한 애들 출력
    for (int i = 0; i < adj[cur].size(); i++)
    {
        int next = adj[cur][i]; //leaf로 탐색
        if (visit[next])
            continue;
        dfs(next);
    }
}

void bfs(int start)
{
    /*너비 우선 탐색 
      인접한 노드를 차례대로 확인 */
    memset(visit, false, sizeof(visit)); //visit false로 초기화
    visit[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        cout << front << ' '; //방문한 애들 출력
        for (int i = 0; i < adj[front].size(); i++)
        {
            int next = adj[front][i];
            if (!visit[next])
            {
                visit[next] = true;
                q.push(next);
            }
        }
    }
}

int main(void)
{
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++)
    {
        //양방향 == 무방향
        int start = 0, end = 0;
        cin >> start >> end;
        adj[start].push_back(end);
        adj[end].push_back(start);
    }

    for (int i = 1; i < n; i++)
    {
        //V부터 방문된 점을 순서대로 출력하기 위해
        sort(adj[i].begin(), adj[i].end());
    }

    dfs(v);
    cout << '\n';
    bfs(v);

    return 0;
}