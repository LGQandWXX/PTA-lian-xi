#include<stdio.h>
#include<string.h>
int main()
{
	char ch[70]={'\0'};
	gets(ch);
	double c=1.0;
	int i=strlen(ch);//字数
	int j=0,b=1;
	for(int m=0;m<i;m++){
		if(ch[m]=='2'){
			j++;
		}
	}
	int d=ch[i-1]-'0';
	if(d%2==0){
		b=2;
	}
	if(ch[0]=='-'){
		i-=1;
		c=1.5;
	}
	printf("%.2f%%",(j*1.0/i)*c*b*100);
	return 0;
}