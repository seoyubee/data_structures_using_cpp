#include "ArrayStack.h"

int main()
{
	ArrayStack stack;
	for (int i = 0; i < MAX_STACK_SIZE; ++i) stack.push(rand() % MAX_STACK_SIZE);
	stack.display();
	stack.pop();
	stack.pop();
	stack.pop();
	stack.display();
}