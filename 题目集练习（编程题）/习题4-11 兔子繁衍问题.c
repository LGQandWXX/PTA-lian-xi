#include <stdio.h>
int main(){
    int n, x = 1,y = 0, sum, cnt = 0;
    int i;
	scanf("%d", &n);
	if(n == 1){
		printf("1");
	}else{
	    while(y < n){
	        sum = x + y;
	        x = y;
	        y = sum;
	        cnt++;
	    }
	    printf("%d", cnt);
    }
	return 0;
}
