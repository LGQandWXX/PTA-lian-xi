#include <stdio.h>
int main()
{
	int n;
	int sum=0;
	scanf("%d",&n);
	int a;
	for(a=1;a<=n;a++)
	{
		int ret=1;
		int b;
		for(b=1;b<=a;b++)
		{
			ret=ret*b;
		}
		sum=sum+ret;
	}
	
	printf("%d\n",sum);
	return 0;
}