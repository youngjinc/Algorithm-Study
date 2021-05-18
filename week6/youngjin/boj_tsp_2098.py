import sys
n = int(sys.stdin.readline())
w = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]
INF = sys.maxsize
cache = [[INF]*(1<<n) for _ in range(n)] # 동적 계획법을 위한 캐시 초기화

def tsp(cur_node, visited):
    # 모든 도시를 방문한 경우
    if visited == (1 << n) - 1: 
        return w[cur_node][0] or INF # 마지막도시에서 출발 도시로 돌아가는 비용 반환, 돌아갈 수 없으면 INF 반환(해당 경로는 최소 비용이 될 수 없음)

    # 남은 구간이 이전 탐색과 중복(중복 호출), 계산 생략하고 바로 값을 반환
    if cache[cur_node][visited] != INF: 
        return cache[cur_node][visited]

    min_cost = INF
    for next_node in range(1, n):
        # 방문하지 않았으면서 방문 가능한 도시인 경우
        if not visited & (1 << next_node) and w[cur_node][next_node] != 0: 
            min_cost = min(min_cost, tsp(next_node, visited | (1 << next_node))+w[cur_node][next_node]) # 도시방문, 현재 최소 비용과 비교하여 최소비용을 유지 또는 갱신

    cache[cur_node][visited] = min_cost # 현재 도시, 현재까지 방문한 모든 도시인 경우에서의 최소 비용 저장
    return min_cost

print(tsp(0, 1<<0)) # 시작점을 어디로 잡아도 순환하므로 동일 경로 지남. 시작점 0으로 지정
