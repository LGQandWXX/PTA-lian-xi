#include <stdio.h>
int main()
{
	float n,a;
	int m;
	scanf("%f %d",&n,&m);
	
	if(n<=3){
		a=10;
	}else if(n<=10){
		a=(n-3)*2+10;
	} else{
		a=(n-10)*3+24;
	}
	a+=2*(m/5);
	printf("%.0f",a);
	return 0;
}