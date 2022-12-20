#include<stdio.h>
#include<string.h>

int number[100001];
int cnt = 0;

//push X: 정수 X를 스택에 넣는 연산이다.
void push(int num)
{
    number[cnt] = num;
    cnt ++;
}

//pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
void pop()
{
    if (cnt != 0)
    {
        cnt --;
        printf("%d\n", number[cnt]);
        number[cnt] = 0;
    }
    else 
    {
        printf("%d\n", -1);
    }
}

//size: 스택에 들어있는 정수의 개수를 출력한다.
void size()
{
    printf("%d\n", cnt);
}

//empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
void empty()
{
    if (cnt != 0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
}

//top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
void top()
{
    if (cnt != 0)
    {
        printf("%d\n", number[cnt - 1]);
    }
    else
    {
        printf("%d\n", -1);
    }
}

int main()
{
    int n; //명령의 수
    char stack[10]; //입력한 문자를 넣는 배열
    
    scanf("%d", &n);
    
    int number[100];
    
    for (int i=0; i<n; i++)
    {
        scanf("%s", &stack);
        
        if(strcmp(stack, "push") == 0) //배열 2개를 대소문자로 비교하는 함수
        {
            int num;
            scanf("%d", &num);
            push(num);
        }
        else if (strcmp(stack, "pop") == 0) 
        {
			pop();
		}
		else if (strcmp(stack, "top") == 0) 
        {
			top();
		}
		else if (strcmp(stack, "size") == 0) 
        {
			size();
		}
		else if (strcmp(stack, "empty") == 0) 
        {
			empty();
		}
    }
}