#include <stdio.h>
int main()
{
    int i;
	char str[80];
	i=0;
	while((str[i]=getchar())!='\n'){
		i++;
	}
	str[i]='\0';
	
	 for(int j=i-1;j>=0;j--){
	 	printf("%c",str[j]);
	 }

	return 0;
}
