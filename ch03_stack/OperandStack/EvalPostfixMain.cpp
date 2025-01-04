// ���� ǥ�� ������ ���

#include "OperandStack.h"

double CalcPosfixExpr(FILE* fp = stdin)
{
	char ch;
	OperandStack stack;

	while ((ch = getc(fp)) != '\n')
	{
		if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			double val2{stack.Pop()};
			double val1{stack.Pop()};
			switch (ch)
			{
				case '+': stack.Push(val1 + val2); break;
				case '-': stack.Push(val1 - val2); break;
				case '*': stack.Push(val1 * val2); break;
				case '/': stack.Push(val1 / val2); break;
				default: break;
			}
		}
		else if (ch >= '0' && ch <= '9')
			ungetc(ch, fp);
		double val;
		fscanf_s(fp, "%lf", &val);
		stack.Push(val);
	}
	return stack.Pop();
}

void main()
{
	printf("���� �Է�(���� ǥ��)> ");
	double res{CalcPosfixExpr()};
	printf("��� ��� : %lf\n", res);
}