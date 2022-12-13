#include<stdio.h>

long long sum(int *a, int n) 
{
	long long ans = 0;
    for(int i=0; i<n; i++)
    {
        ans += a[i]; //정수 하나씩 더한 값을 ans에 대입
    }
	return ans;
}

//long long은 64비트의 정수형