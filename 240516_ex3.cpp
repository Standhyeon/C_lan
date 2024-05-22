#include <stdio.h>
int z;
int f(int x)
{
	x = 2;
	z += x;
	return z;
}

int main(void)
{
	z = 5;
	printf("z = %d\n", f(z));
	
	return 0;
}
