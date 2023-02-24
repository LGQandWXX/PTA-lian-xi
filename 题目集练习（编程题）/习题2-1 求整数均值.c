#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int e;
	float f;
	e=a+b+c+d;
	f=(a+b+c+d)/4.0;
	printf("Sum = %d; Average = %0.1f",e,f);
	return 0;
}