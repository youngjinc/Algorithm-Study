import sys

# 입력값 -> 공백으로 구분 -> int로 매핑
n,m = map(int, sys.stdin.readline().split())
no_hear = [sys.stdin.readline().rstrip() for i in range(n)] 
no_see = [sys.stdin.readline().rstrip() for i in range(m)]

# 각 리스트를 집합으로 변환 -> 합집합(&) -> 정렬
#sorted(item) : item의 자료형 상관없이 정렬해서 list로 반환
deudbojab = sorted(set(no_hear) & set(no_see))

print(len(deudbojab))
print('\n'.join(deudbojab)) # join() : 각 원소를 개행문자로 연결
