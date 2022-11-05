#include<stdio.h>

int sum(int n);

int main()
{
	int n = 10;
	printf("The sum from 1 to %d is %d\n", n, sum(n));

	return 0;
}

int sum(int n) {

	if (n < 1) {
		printf("Error: n must be greater thn 0!\n");
		return 0;
	}
	if (n == 1) return 1;
	else return n = sum(n - 1);
}
