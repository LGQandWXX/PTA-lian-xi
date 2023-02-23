#include <stdio.h>
int main()
{
	int n;
	int i;
	int m;
	int sum=0;
	int count=0;
	double average=0;
	scanf("%d",&n);
	if(n==0){
	average=0;
	count=0;
	}else{
		for(i=0;i<n;i++){
			scanf("%d",&m);
			if(m>=60){
			count++;
			}
			sum+=m;
		}
		average=1.0*sum/n;
	}
	printf("average = %.1f\n",average);
	printf("count = %d",count);
	
	return 0;
}