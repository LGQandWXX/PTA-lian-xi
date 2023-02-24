#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int i;
	int a;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		a=pow(3,i);
		printf("pow(3,%d) = %d\n",i,a);
	}
	return 0;
}