#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int m,n;
	
	scanf("%d %d",&m,&n);
	do{
		scanf("%d",&a);
		if(a<0){
			b=-1;
			break;
		}
		b++;
		if(a>m){
			printf("Too big\n");
		}else if(a<m){
			printf("Too small\n");
		}
	}while(a!=m&&b<=(n+1));
	if(b==1){
		printf("Bingo!\n");
	}else if(b<=3&&b>1){
		printf("Lucky You!\n");
	}else if(b>3&&b<=n){
		printf("Good Guess!\n");
	}else if(b>n||b<0){
		printf("Game Over\n");
	}
	return 0;
}