#include <cstdio>
#include <cstdlib>
#include <ctime>

int SumAlgorithmA(int);
int SumAlgorithmB(int);
int SumAlgorithmC(int);

int main()
{
	clock_t start, finish;
	double duration;
	int n = 88000;

	printf("입력 : %d\n", n);

	start = clock();
	printf("sumAlgorithmA(n) = %d\n", SumAlgorithmA(n));
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("소요 시간 : %lf초\n",duration);

	start = clock();
	printf("sumAlgorithmB(n) = %d\n", SumAlgorithmB(n));
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("소요 시간 : %lf초\n", duration);

	start = clock();
	printf("sumAlgorithmC(n) = %d\n", SumAlgorithmC(n));
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("소요 시간 : %lf초\n", duration);
}

int SumAlgorithmA(int n) {
	int sum{ n * (n + 1) / 2 };
	return sum;
}

int SumAlgorithmB(int n) {
	int sum = 0;
	for (int i = 1; i <= n; ++i) { sum += i; }
	return sum;
}

int SumAlgorithmC(int n) {
	int sum = 0;
	for (int j = 1; j <= n; ++j) {
		for (int i = 0; i < j; ++i) { sum += 1; }
		}
	return sum;
}