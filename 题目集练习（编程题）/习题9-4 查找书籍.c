#include<stdio.h>
struct a                
{
	char name[30];
	double price;
}book[10];
int main()
{
	int n, i, max=0, min=0;
	scanf("%d", &n);
	char c;
	for (i = 0; i < n; i++)
	{
		scanf("%c", &c);
		scanf("%[^\n]", book[i].name);
		scanf("%lf", &book[i].price);
			if (book[i].price > book[max].price){
				max = i;
			}
			 if (book[i].price < book[min].price){
				min = i;
			}
		}
	
	printf("%.2f, %s\n", book[max].price, book[max].name);
	printf("%.2f, %s\n", book[min].price, book[min].name);
	return 0;
}