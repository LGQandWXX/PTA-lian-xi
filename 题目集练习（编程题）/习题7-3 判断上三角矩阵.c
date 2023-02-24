#include<stdio.h>
int main()
{
   int T,n;
   scanf("%d",&T);
   int arr[10][10];
   for(int a=0;a<T;a++){
   	scanf("%d",&n);
   	for(int i=0; i<n; i++){
   		for(int j=0; j<n; j++){
   			scanf("%d", &arr[i][j]);
			}
	   }
	   
	int m=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if ((i>j)&&arr[i][j]!=0){
				m=1;
			}
		}
	}
	
	if(m==0){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
   }
   return 0;
}