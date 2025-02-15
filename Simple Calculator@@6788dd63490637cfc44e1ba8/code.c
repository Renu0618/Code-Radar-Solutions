#include<stdio.h>
int main()
{
    int a,b,result;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    switch (ch) {
        case '+':
            result = a+b;
            printf("%d"result);
            break;
        case '-':
            result = a-b;
            printf("%d",result);
            break;
        case '*':
            result = a*b;
            printf("%d",result);
            break;
        case '/':
            result = a/b;
            printf("%d",result);
            break;
        default:
            printf("error");
    }
    return 0;
}