#include<stdio.h>
int main()
{
	int w = 1;
	char c;
	while((c=getchar())!='\n')
	{
		if(c==' ')
		{
			w = 1;
		}
		else if(w==1)
		{
			w = 0;
			if(c>='a'&&c<='z')
			{
				c-=32;
			}
		}
		printf("%c",c);
	}
    return 0;
}