// ��ȣ �˻� ���α׷�
#include "ArrayStack.h"

bool CheckMatching(const char* file_name)
{
	FILE* fp{fopen(file_name, "r")};
	if (fp == NULL) error("������ �������� �ʽ��ϴ�\n");

	int nLine = 1;
	int nChar = 0;
	ArrayStack stack;  // ���� ��ü
	char ch;

	while ((ch = getc(fp)) != EOF)
	{
		if (ch == '\n') ++nLine;
		++nChar;
		if (ch == '[' || ch == '{' || ch == '(')
			stack.push(ch);
		else if (ch == ']' || ch == '}' || ch == ')')
		{
			int prev = stack.pop();
			if ((ch == ']' && prev != '[')
					|| (ch == '}' && prev != '{')
					|| (ch == ')' && prev != '('))
				break;
		}
	}
	fclose(fp);
	printf("[%s] ���� �˻���:\n", file_name);
	if (!stack.isEmpty())
		printf("���� �߰�: (���� ��=%d, ���ڼ�=%d)\n\n", nLine, nChar);
	else
		printf("��ȣ �ݱ� ����: (���� ��=%d, ���ڼ�=%d)\n\n", nLine, nChar);

	stack.display();
}

int main()
{
	CheckMatching("ArrayStack.h");
	CheckMatching("CheckMatching.cpp");
	
}