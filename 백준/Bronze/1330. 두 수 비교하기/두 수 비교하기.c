#include<stdio.h>
int main() {
    int a, b; //두 정수를 저장할 변수
    scanf("%d %d", &a, &b); //두 정수 입력 받기
    if (a > b) {
        printf(">");
    }
    else if (a == b) {
        printf("==");
    }
    else {
        printf("<");
    }
    return 0;
}