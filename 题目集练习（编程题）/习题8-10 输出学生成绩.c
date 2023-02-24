#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d\n",&n);
	int a[n];
	
	for( i =0 ;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	float average, max, min, sum = 0;
	max = min = a[0];
	
	for( i = 0; i < n; i++ )
	{
		sum+= a[i];	
		if( max < a[i] ) max = a[i];
		if( min > a[i] ) min = a[i];
		
	}
	
	average = sum / n;
	
	printf( "average = %.2f\n", average );
	printf( "max = %.2f\n", max );
	printf( "min = %.2f\n", min );
	
	return 0;
	
}