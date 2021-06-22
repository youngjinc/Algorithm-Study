n,m = map(int, input().split())
x,y, direc = map(int, input().split())

d = [[0] * m for _  in rnage(n)]

array = [list(map(int, input().split()))  for _ in rnage(n)]


# 방문함 여부
d[x][y] = 1

dx= [-1,0,1,0]
dy = [0,1,0,-1]


def turnLeft(){
    global direct
    direc -= 1
    
    if direc == -1 :
        direc = 3 
}


count =1 
turn_time=0

while True:
    turnLeft()
    nx = x + dx[direc]
    ny = y + dy[direc]

    if d[nx][ny] == 0 and array[nx][ny]==0 :
        d[nx][ny]=1 
        x =nx 
        y = ny
        count +=1 
        turn_time =0 
        continue
    else:
        turn_time +=1 
    

    if turn_time == 4 :

        nx = x - dx[direc]
        ny = y - dy[direc]

        if  array[nx][ny]==0:
            x= nx 
            y = ny
        else:
            break


