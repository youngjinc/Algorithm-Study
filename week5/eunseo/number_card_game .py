N,M = map(int, input().split())
result = 0 


for i in range(N):
    data = list(map(int, input().split()))
    minValue = min(data)
    result = max(result,minValue)



print(result)