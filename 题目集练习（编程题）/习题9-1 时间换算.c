#include<stdio.h>
int main(){
    int h,m,s,n;
    scanf("%d:%d:%d",&h,&m,&s);
    scanf("%d",&n);
    if(s+n>=60){
        m++;
        s+=n-60;
    }else{
        s+=n;
    }
    if(m>=60){
        h++;
        m-=60;
    }
    if(h>=24){
        h-=24;
    }
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}