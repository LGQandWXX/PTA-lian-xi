#include <stdio.h> 

int main()
{
	int n;
	scanf("%d",&n);
	if(n<2000||n>2100){
		printf("Invalid year!");
	}else {
		int i;
		int cnt=0;
		for(i=2001;i<=n;i++){
			if(i%4==0&&i%100!=0||i%400==0){
				printf("%d\n",i);
				cnt++;
			}
		}
		if(cnt==0){
			printf("None");
		}
	}
	return 0;
}