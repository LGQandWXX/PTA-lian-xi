#include <stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	while(c!='\n')
    {
        if(c>='A'&&c<'Z')
        {
            c = c+32+1;
        }
        else if(c=='Z')
        {
            c = 'a';
        }
        else if(c>='a'&&c<'z')
        {
            c = c-32+1;
        }
        else if(c=='z')
        {
            c = 'A';
        }
        printf("%c",c);
        scanf("%c",&c);
    }

	return 0;
}
