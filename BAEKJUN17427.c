#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int YAK(int n);

int main(void) 
{
	int input;
	printf("input : ");
	scanf("%d", &input);
	int result=0;

	for (int i = 1; i <= input; i++)
	{
		result += YAK(i);
	}
	printf("result : %d", result);
}

int YAK(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++) if (n % i == 0) sum += i;
	return sum ;
}