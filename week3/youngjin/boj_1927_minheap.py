import sys
import heapq
n= int(sys.stdin.readline())
minheap = [] # 최소힙 초기화
for i in range(n) :
    x = int(sys.stdin.readline())
    if x == 0: # 0을 입력한 경우
        if len(minheap) == 0 : # 배열이 비어있는 경우
            print(0)
        else :
            print(heapq.heappop(minheap)) 
    else :
        heapq.heappush(minheap, x) 
