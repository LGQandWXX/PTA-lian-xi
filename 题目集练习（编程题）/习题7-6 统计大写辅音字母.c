#include<stdio.h>
int main()
{
	int n=0;
	char arr[80];
	int i=0;
	while((arr[i]=getchar())!='\n'){
		i++;
	}
	arr[i]='\0';
	
	for(int j=0;j<i;j++){
		if(arr[j]>='A'&&arr[j]<='Z'&&arr[j]!='A'&&arr[j]!='E'&&arr[j]!='I'&&arr[j]!='O'&&arr[j]!='U'){
			n++;
		}
	}
	printf("%d",n);
	return 0;
}