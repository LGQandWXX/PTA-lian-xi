#include <stdio.h>
int main()
{
	char a;
	scanf("%c\n",&a);
	int i;
	char str[80];
	i=0;
	while((str[i]=getchar())!='\n'){
		i++;
	}
	str[i]='\0';
	
	int b = 0,c = 0;
    for(int j=i;j>=0;j--)
    {
        if( str[j] == a){
            b = j;
            c = 1;
            break;
        }
    }
    if(c == 0) {
    	printf("Not Found\n");
	}else {
		printf("index = %d\n",b);
	}

	return 0;
}
