#include<stdio.h>
int main() {
    int C;
    scanf("%d\n", &C); //테스트 수
    
    for(int i=0; i<C; i++){ //해당 테스트를 친 학생 수
        int N; 
        scanf("%d\n", &N);
        int arr[N];
        
        int sum = 0; //테스트 점수 합
        for(int j=0; j<N; j++){
            scanf("%d", &arr[j]);
            sum = sum + arr[j];
        }
        float average = (double) sum/N; //평균은 정수라는 보장이 없기에 float형
            
        int cnt = 0; //평균 넘는 학생 수
        for(int k=0; k<N; k++){
            if(arr[k]>average)
                cnt++;
        }
        printf("%.3f%%\n", ((double) cnt/N) * 100); //.3으로 소수점 제한, %출력 위해 %%
    }
}