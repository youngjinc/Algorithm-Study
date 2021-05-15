def solution(brown, yellow):
    answer = [0,0]
    for i in range(1,yellow+1):
        # 노란색 타일 수의 약수를 1부터 찾되 나눈 값(약수) i와 몫(약수) yellow // i의 크기가 반전이 되기 전까지 검사
        if yellow % i == 0 and yellow // i >= i:
            width = yellow // i # 큰 약수를 노란색 타일의 가로에 할당
            length = i # 작은 약수를 노란색 타일의 세로에 할당
            
            if brown == width * 2 + length * 2 + 4: # 갈색타일의 수와 노란색 타일의 상관 관계
                # 갈색 타일의 가로 세로 길이는 노란색 타일의 가로 세로 길이에 +2 (꼭짓점 추가)
                answer[0] = width + 2 
                answer[1] = length + 2
    return answer