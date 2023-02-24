#include<stdio.h>
int main() {
    int res, n, sign = 1;
    scanf("%d", &res);
    char c;
    scanf("%c", &c);
    while (c != '=') {
        scanf("%d", &n);
        if (c == '+') {
            res = res + n;
        } else if (c == '-') {
            res = res - n;
        } else if (c == '*') {
            res = res * n;
        } else if (c == '/') {
            if (n == 0) sign = 0; 
            else res = res / n;
        } else {
            sign = 0;
        }
        scanf("%c", &c);
    }
    if (sign == 0) {
        printf("ERROR");
    } else {
        printf("%d", res);
    }
    return 0;
}