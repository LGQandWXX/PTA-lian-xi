#include <stdio.h>
int main()
{
	int n;
	int i;
	double m=1.0;
	double a=1.0;
	double sum=0.0;
	int c = 1;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=c*(a/m);
		a+=1;
		m+=2;
		c=-c;
	}
	printf("%.3f\n",sum);
	return 0;
}