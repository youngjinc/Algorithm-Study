st1 = list(input())
testcase = int(input())


st2 =[]


for i in range(testcase) :
        commend = input().split()
        if commend[0] == 'P':
                st1.append(commend[1])
        elif commend[0] == 'L' and st1 !=[]:
                st2.append(st1.pop())
        elif commend[0] =='D' and st2 !=[]:
                st1.append(st2.pop())
        elif commend[0] == 'B' and st1 !=[]:
                st1.pop()
                
st2.reverse()                


print("".join(st1+st2))