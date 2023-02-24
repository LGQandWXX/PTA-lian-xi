#include <stdio.h>
int main()
{
	int m;
	int n;
	scanf("%d %d",&m,&n);
	double sum=0;
	for(m>0;m<=n;m++){
		sum=sum+m*m+1.0/m;
	}
	printf("sum = %.6f",sum);
	return 0;
}