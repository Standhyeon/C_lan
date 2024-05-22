#include <stdio.h>
int main(void)
{
	int i;
	printf("정수를 입력하세요 : ");
	scanf("%d", &i);
	
	if (i == 1)
		printf("statement_2\n");
	else if (i == 2 || i == 3)
		printf("statement_1\n");
		if (i == 2)
			printf("statement_3\n");
	
		
	return 0; 
}
