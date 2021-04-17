def solution(priorities, location):
    answer = 0
    queue = [(idx,value) for idx, value in enumerate(priorities)]
    
    while True :
        #print(queue)
        current = queue.pop(0)
        if any(current[1] < element[1] for element in queue) :
            queue.append(current)
        else :
            answer = answer + 1
            if current[0] == location :
                return answer

print(solution([1, 1, 9, 1, 1, 1], 0))