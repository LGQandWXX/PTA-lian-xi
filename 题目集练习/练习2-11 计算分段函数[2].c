#include <stdio.h> 
#include <math.h>
int main()
{
    double X;
	scanf("%lf",&X);
	double c;
	if (X>=0){
		c=pow(X,0.5);
		printf("f(%.2f) = %.2f",X,c);
	}else{
		c=(X+1)*(X+1)+2*X+1/X;
		printf("f(%.2f) = %.2f",X,c);
	}
 	return 0; 
}