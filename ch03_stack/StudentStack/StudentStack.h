#pragma once
#include "Student.h"

const int MAX_STACK_SIZE{ 100 };

inline void error(const char* message) {
	printf(" %s\n", message);
	exit(1);
}

class StudentStack
{
	int top;
	Student data[MAX_STACK_SIZE];

public:
	StudentStack() { top = -1; }
	~StudentStack() {}
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE - 1; }
	Student pop() {
		if (isEmpty()) error("스택이 비어있음\n");
		return data[top--];
	}
	Student peek() {
	if (isEmpty()) error("스택이 비어있음\n");
	return data[top];
	}
	void push(Student e) {
	if(isFull())	error("스택이 포화됨\n");
	data[++top] = e;
	}
	void display() {
		printf("전체 학생의 수 = %d\n", top + 1);
		for (int i = 0; i <= top; ++i) { data[i].display(); }
		printf("\n");
	}
};

