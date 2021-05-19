def solution(n, lost, reserve) :
    for i in reversed(reserve) : #각 배열에서 체육복 가져왔는데 도난 당한 학생을 제거
        if i in lost :
            lost.remove(i)
            reserve.remove(i)
            
    for i in reserve : # reserve에 속한 학생의 앞, 뒷번호에 해당하는 학생이 lost에 존재하면 제거
        if i - 1 in lost : 
            lost.remove(i-1) 
        elif i + 1 in lost :
            lost.remove(i+1)
            
    answer = n-len(lost)
    return answer
