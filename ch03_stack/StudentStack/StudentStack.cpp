#include "StudentStack.h"

int main()
{
	StudentStack stack;
	stack.push(Student(2015130007, "ȫ�浿", "��ǻ�Ͱ��а�"));
	stack.push(Student(2015130100, "�̼���", "�����а�"));
	stack.push(Student(2015130135, "Ȳ��", "���а�"));
	stack.display();
	stack.pop();
	stack.display();
}