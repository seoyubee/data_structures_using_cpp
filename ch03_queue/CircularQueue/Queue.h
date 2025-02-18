#pragma once
#include <cstdio>
#include <cstdlib>

const int MAX_SIZE = 20;

inline void error(const char* message)
{
	printf("%s", message);
	exit(1);
}

class Queue
{
	int data[MAX_SIZE];

public:
	int front, rear;

	Queue() : front{-1}, rear{0} {}
	bool isEmpty() { return front == rear; }
	bool isFull() { return (rear + 1) % MAX_SIZE == front; }
	void Enqueue(int e)
	{
		if (isFull()) error("큐가 포화 상태입니다.\n");
		rear = (rear + 1) % MAX_SIZE;
		data[rear] = e;
	}
	int Dequeue()
	{
		if (isEmpty()) error("큐가 공백 상태입니다\n");
		front = (front + 1) % MAX_SIZE;
		return data[front];
	}
	int peek()
	{
		if (isEmpty()) error("큐가 공백 상태입니다.\n");
		return data[(front + 1) % MAX_SIZE];
	}


};

