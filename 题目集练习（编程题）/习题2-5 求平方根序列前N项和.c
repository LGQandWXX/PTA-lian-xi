#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int i;
	double sum=0.0;
	int c = 1;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=1.0*pow(i,0.5);
	}
	printf("sum = %.2f",sum);
	return 0;
}