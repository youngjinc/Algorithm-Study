#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>
#include <algorithm>
using namespace std;

int n = 0, m = 0, v = 0;
vector<int> adj[1001]; 
bool visit[1001];      
queue<int> q;          

void dfs(int cur)
{
    visit[cur] = true;  //방문
    cout << cur << ' '; //방문한 애들 출력
    for (int i = 0; i < adj[cur].size(); i++)
    {
        int next = adj[cur][i];
        if (visit[next])
            continue;
        dfs(next);
    }
}

void bfs(int start)
{
    memset(visit, false, sizeof(visit)); 
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