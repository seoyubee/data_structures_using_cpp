#include "Polynomial.h"

void Polynomial::read() {
	printf("다항식의 최고 차수를 입력하세요: ");
	scanf_s("%d", &degree);
	rewind(stdin);
	printf("각 항의 계수를 입력하세요: ");
	for (int i = 0; i <= degree; ++i)
		scanf_s("%f", &coef[degree - i]);
	}
	

void Polynomial::display(const char* str = "Poly = ") {
	printf("\t%s", str);
	for (int i = degree; i > 0; --i) {
		if (coef[i]) {
			if (coef[i] != 1) printf("%f", coef[i]);
			printf("x^%d + ", i);
			}
		}
	if (coef[0]) printf("%f", coef[0]);
	printf("\n");
	}

void Polynomial::add(Polynomial a, Polynomial b) {
	if (a.degree > b.degree) {
		*this = a;
		for (int i = 0; i <= b.degree; ++i)
			coef[i - (a.degree - b.degree)] += b.coef[i];
		}
	else {
		*this = b;
		for (int i = 0; i <= a.degree; ++i)
			coef[i - (b.degree - a.degree)] += a.coef[i];
		}
	}

void Polynomial::sub(Polynomial a, Polynomial b) {
	if (a.degree > b.degree) {
		*this = a;
		for (int i = 0; i <= b.degree; ++i)
			coef[i - (a.degree - b.degree)] -= b.coef[i];
		}
	else {
		*this = b;
		for (int i = 0; i <= a.degree; ++i)
			coef[i - (b.degree - a.degree)] -= a.coef[i];
		}
	}

void Polynomial::mult(Polynomial a, Polynomial b) {
	for (int i = 0; i < MAX_DEGREE; ++i)
		coef[i] = 0;
	degree = a.degree + b.degree;
	for (int i = a.degree; i >= 0; --i)
		for (int j = b.degree; j >= 0; --j)
			coef[i + j] += a.coef[i] * b.coef[j];
	
	}