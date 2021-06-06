import sys
n = int(sys.stdin.readline().rstrip())
cost = [list(map(int, sys.stdin.readline().split())) for i in range(n)] # 행 입력

def dfs(i, is_visited, cur_cost, fst):
    global min_cost

    if len(is_visited) == n:
        if cost[i][fst] != 0:
            cur_cost+=cost[i][fst]
            min_cost.append(cur_cost)
        return
    else:
        for j in range(n):
            if j not in is_visited and cost[i][j] != 0:
                is_visited.append(j) # 노드 방문
                #cur_cost += cost[i][j]
                dfs(j, is_visited, cur_cost+cost[i][j],fst)
                is_visited.pop()

# global is_visited
# global cur_cost
min_cost = []
for i in range(n):
    dfs(i, [i], 0,i)

print(min(min_cost))
