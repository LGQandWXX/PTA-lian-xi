#include <stdio.h> 

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	int max=0;
	int mid=0;
	int mini=0;
	if(a>b){
		if(a>c){
			if(b>c){
				max=a;
				mid=b;
				mini=c;
			}else{
				max=a;
				mid=c;
				mini=b;
			}
		}else{
			max=c;
			mid=a;
			mini=b;
		}
	}else if(b>c){
		if(a>c){
			max=b;
			mid=a;
			mini=c;
		}else{
			max=b;
			mid=c;
			mini=a;
		}
	}else{
		max=c;
		mid=b;
		mini=a;
	}
	printf("%d->%d->%d",mini,mid,max);
	return 0;
}