#include <stdio.h>
#include<math.h>
int main()
{
	double n;
	int i=0;
	double sum=0.0;
	int c = 1;
	
	scanf("%lf",&n);
	while(fabs(c*1.0/(3*i+1))>n){
        sum+=c*1.0/(3*i+1);
        i++;
		c=-c;
	}
	printf("sum = %.6f",sum);
	return 0;
}