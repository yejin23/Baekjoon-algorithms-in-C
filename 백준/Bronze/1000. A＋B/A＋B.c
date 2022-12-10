#include<stdio.h>
int main() {
    int a, b; 
    scanf("%d %d", &a, &b); //&:변수의 주소에 접근
    printf("%d", a + b);
}