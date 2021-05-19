import sys
import heapq

n = int(sys.stdin.readline())
heap = [] # 힙 초기화
for i in range(n) :
    x = int(sys.stdin.readline())
    if x == 0 : # 0을 입력한 경우
        if len(heap) == 0 : # 배열이 비어있는 경우
            print(0)
        else :
            print(heapq.heappop(heap)[1]) # 원래 값 출력
    else :
        heapq.heappush(heap, (abs(x),x)) # 절댓값 기준으로 정렬하기 위해 절댓값, 원래 값 순으로 튜플로 저장
        
