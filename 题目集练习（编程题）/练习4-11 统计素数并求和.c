#include <stdio.h>  
#include <math.h>
 
int main(){  
	int m,n;
	scanf("%d %d",&m,&n);
	int i;
	int count=0,sum=0;
	
	for(m;m<=n;m++){
		int s;
		s=sqrt(m);
		for(i=2;i<=s;i++){
			if(m%i==0){
				break;
			}
		}
		if(i>s){
			if(m==1){
				count=count;	
			}else{
				sum+=m;
				count++;
			}			
		
		}		
	}
	printf("%d %d",count,sum);	 
    return 0;  
 }