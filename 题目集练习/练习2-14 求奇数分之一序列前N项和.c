#include <stdio.h>
int main()
{
	int n;
	int i;
	double sum=0.0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=1.0/(2*i-1);
	}
	printf("sum = %.6f",sum);
	return 0;
}