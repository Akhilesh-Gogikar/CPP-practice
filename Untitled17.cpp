#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

class queue{
	int capacity;
	
	int front = 0;
	int size = 0;
	int rear = capacity-1;
	
	public:
	int isFull():{
		return (queue.size == queue.capacity);}
		
	int isEmpty():{  
		return (queue.size == 0); }
		
	void enqueue(int item):{
    if (isFull(queue))
        return;
    queue.rear = (queue->rear + 1)%queue->capacity;
    queue.array[queue.rear] = item;
    queue.size = queue->size + 1;
    printf("%d enqueued to queue\n", item);}
    
    int dequeue():
{
    if (isEmpty(queue))
        return INT_MIN;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1)%queue->capacity;
    queue->size = queue->size - 1;
    return item;
}


};
