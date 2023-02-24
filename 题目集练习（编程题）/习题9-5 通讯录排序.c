#include <stdio.h>
struct arr
{
    char name[10];
    int brithday;
    char phone[17];
};
int main()
{
    int n,i,j;
    int min;
    struct arr a[11];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\n");
        scanf("%s %d %s",&a[i].name,&a[i].brithday,&a[i].phone);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j].brithday>a[j+1].brithday)
            {
                a[10]=a[j];
                a[j]=a[j+1];
                a[j+1]=a[10];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d %s\n",a[i].name,a[i].brithday,a[i].phone);
    }
    return 0;
}