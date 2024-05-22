#include <stdio.h>
int input_num(void);
int get_max(int, int);
void print_max(int);
int main(void)
{
	int a, b, max;
	a = input_num();
	b = input_num();
	printf("%d %d", a, b);
	max = get_max(a, b);
	print_max(max);
	return 0;
}

int input_num(void)
{
	int a, b;
	scanf("%d", &a);

	return a;
}

int get_max(int a, int b)
{
	int max;
	if (a > b)
		max = a;
	else
		max = b;
		
	return max;
}

void print_max(int max)
{
	printf("입력받은 두 수중 가장 큰 수는 %d", max);
}









