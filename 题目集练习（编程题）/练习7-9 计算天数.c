#include <stdio.h>
int main()
{
	int i,a,b,c,n=0,
	arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d/%d/%d",&a,&b,&c);
	if((a%4==0&&a%100)||a%400==0){
		arr[2]=29;
    }
	for(i=0;i<=b-1;i++){
		n+=arr[i];
    }
	printf("%d",n+c);
    return 0;
}