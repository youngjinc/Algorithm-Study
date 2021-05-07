minusSplit = input().split('-')
result = 0

for i in minusSplit[0].split('+'):
    result += int(i) 

for i in minusSplit[1:]:
    for j in i.split('+'):
        result -= int(j)
        
print(result)