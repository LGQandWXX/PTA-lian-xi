#include <stdio.h> 

int main()
{
	int m,n;
	double i;
	scanf("%d %d",&m,&n);
	i=(m-n)*100.0/n;
	if(i<10){
		printf("OK");
	}else if(i>=10 && i<50){
		printf("Exceed %.f%%. Ticket 200",i);
	}else{
		printf("Exceed %.f%%. License Revoked",i);
	}
	return 0;
}