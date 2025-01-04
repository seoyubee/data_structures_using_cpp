// 괄호 검사 프로그램
#include "ArrayStack.h"

bool CheckMatching(const char* file_name)
{
	FILE* fp{fopen(file_name, "r")};
	if (fp == NULL) error("파일이 존재하지 않습니다\n");

	int nLine = 1;
	int nChar = 0;
	ArrayStack stack;  // 스택 객체
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
	printf("[%s] 파일 검사결과:\n", file_name);
	if (!stack.isEmpty())
		printf("문제 발견: (라인 수=%d, 문자수=%d)\n\n", nLine, nChar);
	else
		printf("괄호 닫기 정상: (라인 수=%d, 문자수=%d)\n\n", nLine, nChar);

	stack.display();
}

int main()
{
	CheckMatching("ArrayStack.h");
	CheckMatching("CheckMatching.cpp");
	
}