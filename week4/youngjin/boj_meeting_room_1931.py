import sys
n = int(sys.stdin.readline())
meetings = []
for i in range(n) :
    meeting = sys.stdin.readline().split() # 회의 정보 입력
    start, end = map(int,meeting) # 문자열 형태의 회의 시간을 정수로 변환
    meetings.append([end, start]) # 회의 리스트에 추가, 종료시간이 빠른 순으로 정렬하기 위해 end, start 순으로 저장
meetings.sort() # 종료시간 오름차순 정렬
time = 0
count = 0
for i in range(len(meetings)) :
    if time <= meetings[i][1] : # 현재시간 이후에 회의 시작인 경우
        time = meetings[i][0] # 현재시간을 해당 회의의 종료시간으로 갱신
        count += 1 # 회의실 배정

print(count)

