#include <stdio.h>
double fact(int n)
{
	double ret = 1;
	int x;
	for(x=1;x<=n;x++)
	{
		ret=ret*x;
	}
	return ret;
}

int main()
{
	int m;
	int n;
	double result;
	scanf("%d %d",&m,&n);
	result = fact(n)/(fact(m)*fact(n-m));
	
	printf("result = %.0f",result);
	
	return 0;
}