import sys
 
expression = sys.stdin.readline().rstrip().split('-')
min_sum = 0

for op in expression[0].split('+') : # 첫번째 - 위치 기준으로 좌측의 값은 더함.
    min_sum+= int(op)
for element in expression[1:] : # 첫번째 - 위치 기준으로 우측의 값은 뺌.
    for op in element.split('+') :
        min_sum-= int(op)
        
print(min_sum)
