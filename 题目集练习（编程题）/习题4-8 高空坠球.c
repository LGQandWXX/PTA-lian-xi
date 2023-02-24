# include<stdio.h>
int main(){
	int i,h,n;
	float s=0.0,z=0.0,k=2.0;
	scanf("%d %d",&h,&n);
    if(n>0) {
     s=h;
    for(i=1;i<=n;i++){
	s=s+2.0*z;
	z=h/k;
	k=k*2; 
        }
    }
	printf("%0.1f %0.1f",s,z);
	return 0;
}