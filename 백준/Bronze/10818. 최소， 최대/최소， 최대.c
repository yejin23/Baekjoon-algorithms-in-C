#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N); //정수 개수 입력 받기
    int arr[N]; //배열 선언
    
    for(int i = 0; i < N; i++){ //배열 초기화로 값 채우기
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    int min = arr[0];
    
    for(int j = 0; j < N; j++) {
        if(arr[j] > max)
            max = arr[j];
        if(arr[j] < min)
            min = arr[j];
    }
    
    printf("%d %d", min, max);
}