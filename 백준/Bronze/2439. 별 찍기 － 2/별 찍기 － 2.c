#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    
    for (int i=1; i<=N; i++){ //총 n개의 줄 생성
        for (int a=1; a<=N-i; a++){ //별 앞 빈 공간 a개 생성
            printf(" ");
        }
        for (int b=1; b<=i; b++){ //별 i개 생성
            printf("*");
        }
        printf("\n"); //줄 바꿈
    }
}