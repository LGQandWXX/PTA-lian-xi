#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a;
    int b;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            b+=a;
        }
        printf("%d\n",b);
        b=0;
    }
    return 0;
}