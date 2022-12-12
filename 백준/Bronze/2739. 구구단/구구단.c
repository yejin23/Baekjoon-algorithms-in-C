#include<stdio.h>
int main() {
    int N; //몇 단
    scanf("%d", &N);
    
    int A;
    for(A=1; A<10; A++) //N*1 ~ N*9
        printf("%d * %d = %d\n", N, A, N*A);
    
    return 0;
}