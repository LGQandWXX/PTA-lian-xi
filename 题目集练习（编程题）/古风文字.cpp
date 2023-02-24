#include<stdio.h>
#include<string.h>
int main()
{
	int N;//每列字符数
	int e=0,f=0;//e是列，f是总数
	scanf("%d",&N);
	char a[1000],b[100][1000]={' '};
	getchar();
	gets(a);
	int m=strlen(a);
	while(f<m){
		f+=N;
		e++;
	}
	f=0;
	for(int i=e-1;i>=0;i--){
		for(int j=0;j<N;j++){
			if(f<m){
				b[i][j]=a[f];
				f++;
			}
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<e;j++){
			if(b[j][i]!='\0'){
				printf("%c",b[j][i]);
			}else{
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return 0;
}