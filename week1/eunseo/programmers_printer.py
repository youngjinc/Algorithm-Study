def solution(priorities, location):
    answer = 0
    cnt = 0 
    while True :
        if location == 0 :
            if priorities[0] != max(priorities):
                priorities.append(priorities.pop(0))
                location = len(priorities)-1 
            else :
                return  answer+1
        else :
            if priorities[0] != max(priorities):
                priorities.append(priorities.pop(0))
                location = location-1
            else:
                answer+=1
                priorities.pop(0)
                priorities.append(0)
                location-=1