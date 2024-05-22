#include <stdio.h>
int max(int, int); 
int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("max = %d", max(a, b));
	
	return 0;
}

int max(int a, int b)
{
	int c;
	if (a > b)
		c = a;
	else
		c = b;
	
	return c;
}
