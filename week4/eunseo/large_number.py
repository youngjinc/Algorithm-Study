n,m,k = map(int, input().split())

data = list(map(int, input().split()))

data= [2,4,5,4,6]

data.sort()
max_1 = data[n-1]
max_2 = data[n-2]

result = 0

while True:
    for i in range(k):
        if m==0:
            break 
        result +=max_1
        m -=1 
    if m ==0 :
        break
    result += max_2
    m-=1 
print(result)


# 더 나은 코드
n,m,k = map(int, input().split())
data = list(map(int, input().split()))

data.sort()
max_1 = data[n-1]
max_2 = data[n-2]


# 가장 큰 수가 더해지는 횟수 계산
count  = int(m/(k+1))*k

count += m % (k+1)

result = 0
result += (count) * max_1

result += (m-count) * max_2

print(result)