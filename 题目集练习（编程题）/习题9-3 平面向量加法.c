#include <stdio.h>
int main()
{
	double x1,y1,x2,y2;
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	double x,y;
	x=x1+x2;
	y=y1+y2;
	if(fabs(x)<0.05){
		x = 0.0;
	}
	if(fabs(y)<0.05){
		y = 0.0;
	}
	printf("(%.1f, %.1f)",x,y);
	return 0;
}