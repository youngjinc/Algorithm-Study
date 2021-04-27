import sys

lst = list(sys.stdin.readline().rstrip())
m = int(sys.stdin.readline())
rst = []

for i in range(m) :
    cmd = sys.stdin.readline().split()
    if cmd[0] == 'L':
        if len(lst) != 0:
            rst.append(lst.pop())
    elif cmd[0] == 'D':
        if len(rst) != 0:
            lst.append(rst.pop())
    elif cmd[0] == 'B':
        if len(lst) != 0:
            lst.pop()
    else :
        lst.append(cmd[1])
        
rst.reverse()
print("".join(lst+rst)) 
