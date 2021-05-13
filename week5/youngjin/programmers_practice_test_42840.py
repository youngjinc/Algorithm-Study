def solution(answers):
    # 학생 별 정답 패턴
    no1 = [1, 2, 3, 4, 5]
    no2 = [2, 1, 2, 3, 2, 4, 2, 5]
    no3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]

    # 학생 별 맞은 문제 수
    cnt = [0,0,0]
    
    for i in range(len(answers)):
        # 인덱스 순환하면서 검사
        if answers[i] == no1[i % len(no1)]: 
            cnt[0] +=1
        if answers[i] == no2[i % len(no2)]:
            cnt[1] +=1
        if answers[i] == no3[i % len(no3)]:
            cnt[2] +=1
            
    answer = [i+1 for i, value in enumerate(cnt) if value == max(cnt)] # 학생 번호는 1부터 시작, 인덱스(i) + 1
    
    return answer
