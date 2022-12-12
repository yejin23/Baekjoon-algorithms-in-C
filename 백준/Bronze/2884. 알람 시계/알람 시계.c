#include<stdio.h>
int main() {
    int H, M;
    scanf("%d %d", &H, &M);
    
    if (M-45 < 0) //0~44분일 경우
    {
        H = H - 1;
        M = M + 15; //H,M에 새로운 시각 대입
        
        if (H < 0)
        {
            H = 24 + H;
        }
    }
    else //45~59분일 경우
    {
        M = M - 45; //M에 새로운 시각 대입
    }
    
    printf("%d %d", H, M);
    return 0;
}