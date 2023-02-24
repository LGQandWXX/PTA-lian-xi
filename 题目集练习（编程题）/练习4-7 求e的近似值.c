#include<stdio.h>
int main()
{
	int i, j, n;
	double m, a;
	a=1;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		m=1;
		for(j=1; j<=i; j++){
			m=m*j;
		}
		m=1.0/m;
		a=a+m;
	}
	printf("%.8f", a);
	
	return 0;
}