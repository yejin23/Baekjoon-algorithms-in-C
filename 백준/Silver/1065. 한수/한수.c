#include<stdio.h>

int han(int n);
int main()
{
    int input, hnum;
    scanf("%d", &input); 
    hnum = han(input);
    printf("%d", hnum);
}

int han(int n)
{
    int i, cnt = 0, a, b, c;
    if(n < 100) //99까지는 전부 한수
    {
        return n; //입력 받은 수 그대로 리턴
    }
    else
    {
        for(i=100; i<=n; i++)
        {
            a=i/100; //백의자리수
            b=(i%100)/10; //십의자리수
            c=(i%100)%10; //일의자리수
            if((a-b)==(b-c)) //등차수열 조건문
                cnt++; //등차수열 성립시 cnt변수 증가
        }
        return(99+cnt);
    }
}