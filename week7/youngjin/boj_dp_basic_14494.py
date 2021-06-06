import sys
n, m = map(int, sys.stdin.readline().split())
mod = 1e9+7
cache = [[0] * (m+1) for _ in range(n+1)]
cache[1][1] = 1 # (1,1)

for x in range(1,n+1):
    for y in range(1,m+1):
        if not(x == 1 and y == 1): # (1,1)제외
            cache[x][y] = (cache[x-1][y] + cache[x][y-1] + cache[x-1][y-1]) % mod # 현재 위치는 왼쪽 또는 위, 대각선 위로부터 올 수 있다.

print(int(cache[n][m]))