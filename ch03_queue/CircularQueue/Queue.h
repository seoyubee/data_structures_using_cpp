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
		if (isFull()) error("ť�� ��ȭ �����Դϴ�.\n");
		rear = (rear + 1) % MAX_SIZE;
		data[rear] = e;
	}
	int Dequeue()
	{
		if (isEmpty()) error("ť�� ���� �����Դϴ�\n");
		front = (front + 1) % MAX_SIZE;
		return data[front];
	}
	int peek()
	{
		if (isEmpty()) error("ť�� ���� �����Դϴ�.\n");
		return data[(front + 1) % MAX_SIZE];
	}


};

