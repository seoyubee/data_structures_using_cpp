#pragma once
#include <cstdio>
#include <cstdlib>
#include <cstring>
#define MAX_STRING 100

class Student
{
	int id;
	char name[MAX_STRING];
	char dept[MAX_STRING];

public:
	Student(int i = 0, const char* n = "", const char* d = "") {
		id = i;
		strcpy_s(name, n);
		strcpy_s(dept, d);
	}

	void display() {
		printf("�й�:%-15d ����:%-20s �а�:%-20s\n", id, name, dept);
	}
};
