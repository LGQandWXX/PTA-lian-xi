#include <stdio.h>  
#include <math.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a;
	a=m%n;
	int  x;
	x=m*n;//
	
	if(a==0){
		printf("%d %d",n,x/n);
	}else{
		
		while(a!=0){
			m=n;
			n=a;
			a=m%n;		 
		}
		printf("%d %d",n,x/n);
	}					         
    return 0;  
 } 
