#include <stdio.h>
int main()
{
	int N;
	char ch;
	scanf("%d %c",&N,&ch);
	int m;
	if(N%2==0){
		m=N/2;
	}else{
		m=N/2+1;
	}
	if(3<=N&&N<=21){
		for(int i=0;i<m;i++){
			for(int i=0;i<N;i++){
				printf("%c",ch);
			}
			printf("\n");
		}
	}
	return 0;
}