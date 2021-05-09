def solution(n, lost, reserve):
    
    n_lost = list(set(lost)-set(reserve))
    n_reserve = list(set(reserve)-set(lost))
    
    answer= n - len(n_lost)
    
    for i in  n_lost :
            
        if i-1 in n_reserve :
            answer +=1
            n_reserve.remove(i-1)
        elif i+1 in n_reserve :
            answer +=1 
            n_reserve.remove(i+1)

        
    return answer