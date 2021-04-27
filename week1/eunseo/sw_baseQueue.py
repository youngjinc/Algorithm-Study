#큐가 비어있을 경우
def isEmpty():
	return front == rear
# 큐가 꽉 차있을 경우 
def isFull():
	return (rear+1) % len(cQ) == front
#원형큐의 삽입
def enQueue(item):
	global rear
	if isFull():
		print("Queue_fULL ",rear)

	else:
		rear = (rear+1)%len(cQ) 
		cQ[rear]=item
def deQueue():
	global front
	if isEmpty():
		print("Queue_Empty")
	else:
		front = (front+1)%len(cQ)
		return cQ[front]
cQ_SIZE = 4
cQ =[0] * cQ_SIZE

#front,rear를 0으로 초기화
front=0
rear =0

enQueue('A')
enQueue('B')
enQueue('C')
print(deQueue())
print(deQueue())
print(deQueue())

# list 이용
def enQueue(item):
	queue.append(item)
def deQueue():
	if isEmpty():
		print('Queue_Empty')
	else:
		return queue.pop(0)
def isEmpty():
	return len(queue) ==0 
def Qpeek():
	if isEmpty():
		print("Queue_Empty")
	else:
		return queue[0]
queue =[]
#front =-1 rear =len(queue)-1 
enQueue('A')
enQueue('B')
enQueue('C')
print(deQueue())
print(deQueue())
print(deQueue())