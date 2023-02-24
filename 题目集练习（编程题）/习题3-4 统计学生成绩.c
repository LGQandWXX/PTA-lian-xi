#include <stdio.h>
int main()
{
	int n,i,m;
	int A,B,C,D,E;
	A=B=C=D=E=0;
	scanf("%d",&m);

	for(i=0;i<m;i++){
		scanf("%d",&n);
		if(n>=90){
			A++;
		}else if(n<90&&n>=80){
			B++;
		}else if(n<80&&n>=70){
			C++;
		}else if(n<70&&n>=60){
			D++;
		}else if(n<60&&n>=0){
			E++;
		}
	}
	printf ("%d %d %d %d %d",A,B,C,D,E);
    return 0;
}