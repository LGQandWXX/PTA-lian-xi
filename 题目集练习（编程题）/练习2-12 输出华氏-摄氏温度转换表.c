#include <stdio.h> 
int main()
{
	int lower,upper;
	scanf("%d %d",&lower,&upper);
	if(lower > upper || upper>100){
		printf("Invalid.");
	}else{
		int f;
		double c;
		printf("fahr celsius\n");
		for(f=lower;f<=upper;f+=2)
		{
			c=5.0*(f-32)/9.0;
			printf("%d%6.1f\n",f,c);
		}
	}
	return 0;
}