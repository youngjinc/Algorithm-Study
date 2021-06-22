arr = [1,1,3,3,2,3,3,3,4,4]
# arr = [1,2,3,4]

def solution(arr):
  check = []
  result = []

  for j in arr: 
    if 1 < arr.count(j) and j not in check:
      check.append(j)
  
  for i in check:
    result.append(arr.count(i))
  
  if check == []:
    return [-1]
  else:
    return result


print(solution(arr))