#include <stdio.h>
int main()
{
	float X;
	scanf("%f",&X);
	float c;
	if (X!=0){
		c=1/X;
		printf("f(%.1f) = %.1f",X,c);
	}else{
		c=0;
		printf("f(%.1f) = %.1f",X,c);
	}
	return 0;
}