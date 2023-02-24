#include <stdio.h>
int main()
{
	int n;
	int i;
	double sum=0.0;
	int c = 1;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=c*1.0/(3*i-2);
		c=-c;
	}
	printf("sum = %.3f",sum);
	return 0;
}