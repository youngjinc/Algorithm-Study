import sys
input = sys.stdin.readline

n, m, v = map(int, input().split())
visited = [0]*(n+1)
matrix = [[0]*(n+1) for i in range(n+1)]
for i in range(m): # 간선 입력
    row, colume = map(int, input().split())
    matrix[row][colume] = matrix[colume][row] = 1

def dfs(cur_vertex):
    visited[cur_vertex] = 1 # 정점 방문
    print(cur_vertex, end = ' ')
    for next_vertex in range(1, n+1):
        if visited[next_vertex] == 0 and matrix[cur_vertex][next_vertex] == 1: # 다음 정점으로 가는 간선이 있고, 아직 방문하지 않은 정점인 경우
            dfs(next_vertex) # 다음 정점 방문예정

def bfs():
    visited[v] = 1
    queue = [v]
    while queue:
        cur_vertex = queue.pop(0) # 큐의 맨 앞 정점을 방문
        print(cur_vertex, end = ' ')
        for next_vertex in range(1, n+1):
            if visited[next_vertex] == 0 and matrix[cur_vertex][next_vertex] == 1: # 다음 정점으로 가는 간선이 있고, 아직 방문할 정점으로 탐색되지 않은 경우
                queue.append(next_vertex) # 방문할 정점으로 추가
                visited[next_vertex] = 1 # 방문할 정점으로 탐색 됨

dfs(v)
print()
visited = [0]*(n+1)
bfs()
