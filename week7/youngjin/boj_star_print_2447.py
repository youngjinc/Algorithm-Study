import sys
n = int(sys.stdin.readline())
pattern = ['***','* *','***']
width = 3

# 미완성 패턴인 경우
while width < n: 
    edge = [row * 3 for row in pattern] # 가장자리줄, 기존 패턴의 3배
    middle = [row + ' ' * width + row for row in pattern] # 가운데줄
    pattern = edge + middle + edge # 패턴 갱신
    width = len(edge[0]) # 현재 완성된 패턴의 가로길이

for row in pattern:
    print(row)
