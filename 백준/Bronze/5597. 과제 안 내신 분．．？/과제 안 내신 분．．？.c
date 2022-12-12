#include<stdio.h>
int main() {
    int list[30] = {0,}; //배열의 요소를 모두 0으로 초기화

    for (int i = 0; i < 28; i++){ //출석한 28명
        int a;
        scanf("%d", &a);
        list[a - 1] = 1;
    }
    for (int i = 0; i < 30; i++){
        if (list[i] == 0) //출석하지 않은 학생
            printf("%d\n", i + 1);
        }
}