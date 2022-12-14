#include <stdio.h>

int main()
{
	int a[100][100]; //2차배열 2개 선언
	int b[100][100];
	int n,m; 
	scanf("%d %d", &n, &m); //열, 행의 길이 입력 받기
    
	for(int i = 0; i < n; i++) //1번째 행렬
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int k = 0; k < n; k++) //2번째 행렬
	{
		for(int l = 0; l < m; l++)
		{
			scanf("%d", &b[k][l]);
		}
	}
	for(int q = 0; q < n; q++) //1,2 행렬 값 더하기
	{
		for(int w = 0; w < m; w++)
		{
			a[q][w] += b[q][w];
			printf("%d ", a[q][w]);
		}
		printf("\n"); //열을 기준으로 줄 바꿈
	}
	return 0;
}