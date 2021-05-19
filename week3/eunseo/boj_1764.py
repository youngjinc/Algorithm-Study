N, M = map(int, input().split())
d = set()
j = set()

for _ in range(N):
    i = input() 
    d.add(i) 


for _ in range(M):
    i = input() 
    j.add(i) 

arr = sorted(list(d&j))


print(len(arr))


for name in arr :
    print(name)