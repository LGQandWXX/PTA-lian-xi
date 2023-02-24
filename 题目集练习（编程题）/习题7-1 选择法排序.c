#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
 
    int i,j,tmp;
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
 
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(num[j]>num[i])
            {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d",num[i]);
        if(i!=n-1)
        {
            printf(" ");
        }
    }
    return 0;
}