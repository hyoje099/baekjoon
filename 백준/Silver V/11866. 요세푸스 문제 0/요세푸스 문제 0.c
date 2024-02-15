#include <stdio.h>
#include <stdlib.h>

#define SIZE 1001

typedef struct {
	int queue[SIZE];
	int front, rear;
}QueueType;

void init_queue(QueueType* q)
{
	q->front = q->rear = 0;
}

int is_full(QueueType* q)
{
	return ((q->rear + 1) % SIZE == q->front);
}

int is_empty(QueueType* q)
{
	return (q->front == q->rear);
}

void push(QueueType* q, int e)
{
	if (is_full(q))
		return;

	q->rear = (q->rear + 1) % SIZE;
	q->queue[q->rear] = e;
}

int pop(QueueType* q)
{
	if (is_empty(q))
		return -1;

	q->front = (q->front + 1) % SIZE;
	return q->queue[q->front];
}

int size(QueueType* q)
{
	if (q->front < q->rear)
		return q->rear - q->front;
	else
		return SIZE - q->front + q->rear;
}

int main()
{
	QueueType Q; init_queue(&Q);

	int i, j, N, K, tmp;

	scanf("%d %d", &N, &K);

	for (i = 0; i < N; i++)
	{
		push(&Q, i + 1);
	}

	printf("<");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < K - 1; j++)
		{
			tmp = pop(&Q);
			push(&Q, tmp);
		}
		if (size(&Q) == 1)
			break;
		tmp = pop(&Q);
		printf("%d, ", tmp);
	}
	printf("%d>", pop(&Q));

	return 0;
}