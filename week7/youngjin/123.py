import sys

n = int(sys.stdin.readline())
pattern = [["*","*","*"],["*"," ","*"],["*","*","*"]]

def printStar(answer):
    #line = len(answer[0])

    print(len(answer[0]))
    print(len(answer[26]))
    #for i in range(line):
    #    print("".join(answer[i]))

if n == 3 :
    printStar(pattern)
    
else :
    k = 2
    answer = [[" "]*n for _ in range(n)]
    while 3 ** k <= n:
        prev_num = 3**(k-1)
        cur_num = 3**k
        print(prev_num)

        for i in range(0, cur_num, prev_num): # 이전 크기로 나눠떨어지는 행일 때마다
            for j in range(0, cur_num, prev_num): # 이전 크기로 나눠떨어지는 열일 때마다
                #print("i,j : ", i, j)
                if not(i // prev_num == 1 and j // prev_num == 1):
                    for m in range(prev_num):
                        #print("m : ", m, "j:", j, "j+m:", j+m)
                        answer[i+m][j:j+prev_num] = pattern[m]                       
        
        pattern = answer
        k += 1
        
    printStar(pattern)
