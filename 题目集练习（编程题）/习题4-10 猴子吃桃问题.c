#include <stdio.h>  
 int main(){  
	int n;
	int num=1;
	scanf("%d",&n);
	for(int i=1;i<=n-1;i++){
		num=(num+1)*2;
	}
	 printf("%d",num);
    return 0;  
 }