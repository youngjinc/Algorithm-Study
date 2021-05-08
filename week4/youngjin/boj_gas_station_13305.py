import sys
n = int(sys.stdin.readline())
length = list(map(int, sys.stdin.readline().split()))
costs = list(map(int, sys.stdin.readline().split()))

min_cost = costs[0] * length[0] # 최소비용, 첫도시에서 무조건 주유
current_min = costs[0] #현재까지 발견된 최소 비용

for i in range(1,len(length)) :
    if costs[i] < current_min : # 현재 최소 비용보다 더 저렴한 주유소가 나온 경우
        current_min = costs[i] # 현재 최소 비용 갱신
        min_cost += costs[i] * length[i] 
    else :
        min_cost += current_min * length[i] # 갱신 없이 기존 최소 비용으로 주유
print(min_cost)
