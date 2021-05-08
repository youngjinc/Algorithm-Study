import sys
import heapq
n= int(sys.stdin.readline())
maxheap = [] # 최대힙 초기화
for i in range(n) :
    x = int(sys.stdin.readline())
    if x == 0 : # 0을 입력한 경우
        if len(maxheap) == 0: # 배열이 비어있는 경우
            print(0)
        else :
            print(-heapq.heappop(maxheap)) # 원래 값으로 출력하기 위해 부호 변경
    else :
        heapq.heappush(maxheap, -x) # heapq 모듈은 최소 힙으로 구현되어 있으므로 x 부호 변경