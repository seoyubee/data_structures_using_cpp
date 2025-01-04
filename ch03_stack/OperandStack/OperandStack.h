// �ǿ����� ���� Ŭ����

#pragma once
#include <cstdio>
#include <cstdlib>

const int MAX_STACK_SIZE = 20;

inline void error(const char* message)
{
  printf(" %s\n", message);
  exit(1);
}

class OperandStack
{
  double data[MAX_STACK_SIZE];
  int top;

public:
  OperandStack() : top{-1} {}
  bool isEmpty() { return top == -1; }
  bool isFull() { return top == MAX_STACK_SIZE - 1; }
  void Push(double e)
  {
    if (isFull()) error("���� ��ȭ ����");
    data[++top] = e;
  }
  double Pop()
  {
    if (isEmpty()) error("���� ���� ����");
    return data[top--];
  }
};

