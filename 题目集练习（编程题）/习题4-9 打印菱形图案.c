#include<stdio.h>
int main()
{
	int i, j, k;
	int number;
	int x ;
	scanf("%d",&number);
	x=( number / 2 )+ 1;
	for (i = 1; i <= x; i++){
		for (j = x-i; j >0; j--)
		{
			printf("  ");
		}
		for (k = 0; k < (2*i-1); k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (i = 1; i < x; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("  ");
		}
		for (k = (x - i) * 2 - 1;k>0;k--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
