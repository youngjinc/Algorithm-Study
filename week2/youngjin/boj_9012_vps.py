import sys

for i in range (int(sys.stdin.readline())):
    st1 = list(sys.stdin.readline().rstrip()) #입력한 VPS
    st2 = [] #검사 시 사용할 스택
    
    st2.append(st1.pop()) #
    while len(st1) > 0 :
        if len(st2) == 0 : #st2에 원소가 없는 경우
            st2.append(st1.pop()) 
            if len(st1) == 0 : #st1에서 꺼낸원소가 하필 마지막 원소였다면 종료
                break
            
        if st1[-1] + st2[-1] == '()': #VPS인 경우
            st2.pop() #각 스텍에서 원소제거
            st1.pop()
            
        else : #VPS가 아닌 경우
            st2.append(st1.pop()) 
        
    print('YES' if not st2 else 'NO') #st2에 원소가 남아있다면 NO를 출력
