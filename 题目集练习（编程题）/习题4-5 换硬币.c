 #include <stdio.h>  
int main () {  
    int x, cnt = 0;  
    int j,i,k;
    scanf("%d", &x);  
    //把所有情况算过去，由于按5分、2分、1分硬币的数量从大到小，因此倒序遍历   
    for (k = x / 5; k > 0; k-- )   
        for (i = x / 2; i > 0; i-- )  
            for (j = x; j > 0; j-- )  
                if ( k * 5 + i * 2 + j == x) {  
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", k, i, j, k + j + i);  
                    cnt++;  
                }  
    printf("count = %d", cnt);  
    return 0;  
}