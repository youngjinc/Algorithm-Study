import sys
input = sys.stdin.readline
n = int(input())
k = int(input())

low = 0
high = k # k번째 수는 K를 넘을 수 없으므로 k번째 수는 최대 k이다.
kth_num = 0

while low <= high:
    count = 0 # mid보다 작은 숫자들의 개수
    mid = (low+high) // 2 # B리스트를 일렬로 나열했을 때 count번째 값

    ''' 
    i행의 숫자들은 i*1, i*2, i*3, ..., i*N으로 구성되어 있고
    i행의 숫자들 중 m보다 작거나 같은 숫자는 (i*j <= m)를 만족하는 j의 개수이고, j의 개수는 행렬크기 N(N*N)을 초과할 수 없다.
    '''
    for i in range(1, n+1):
        count += min(mid//i, n) # 행렬 A에서 i번째 행에서 mid보다 작은 숫자들의 개수
    
    if count < k:
        low = mid + 1
    else:
        kth_num = mid
        high = mid - 1

print(kth_num)
