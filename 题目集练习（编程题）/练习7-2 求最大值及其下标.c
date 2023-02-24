#include<stdio.h>
 int main()
{
    int n,max,count=0,input,max_count=0;
    scanf("%d",&n);
    scanf("%d",&max);
    
    while(1==scanf("%d",&input))
        for( count++;max<input;max_count=count)max=input;
    printf("%d %d",max,max_count);
     return 0;
}