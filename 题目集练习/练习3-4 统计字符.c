#include <stdio.h> 

int main()
{
	int letter,blank,digit,other;
	letter=blank=digit=other=0;
	int i;
	char n;
	
	for(i=0;i<10;i++){
		scanf("%c",&n);
		if((n>='a'&&n<='z')||(n>='A'&&n<='Z')){
			letter++;
		}else if(n==' '||n=='\n'){
			blank++;
		}else if(n>='0'&&n<='9'){
			digit++;
		}else{
			other++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
	return 0;
}