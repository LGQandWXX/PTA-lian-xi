#include<stdio.h>
int main()
{
	int a[6][6];
	int m,n;
	int j,i;
	scanf("%d %d",&m,&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	m%=n;
	for(i=0;i<n;i++){
		for(j=n-m;j<n;j++){
			printf("%d ",a[i][j]);
		}
		for(j=0;j<n-m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}