# N,k = map(int, input().split())
# cnt =0

# while N>1 :
    
#     if N%k == 0 :
#         N = N//k
#         cnt +=1
    
#     else:
#         N-=1 
#         cnt+=1 



# print(cnt)


#최적의 해를 구하기 위해서는 먼저 k로 계속 나누고 1씩 빼주는 것이 효율적임


N,k = map(int, input().split())
cnt =0

while N>=k :

    if N % k == 0 :
        N = N//k
        cnt +=1
    else:
        N -=1 
        cnt +=1 

while N>1 :
    N -=1 
    cnt +=1 

print(cnt)