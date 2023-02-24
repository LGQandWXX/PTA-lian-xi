#include<stdio.h>
int main()
{
	int i,n;
	double a=1.0;
	double b=2.0;
	double sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=b/a;
		b+=a;
		a=b-a;
	}
	printf("%.2f",sum);
    return 0;
}