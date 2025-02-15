#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",ch);
    int a,b,result;
    scanf("%d %d",&a,&b);
    switch (ch) {
        case '+':
            result = a+b;
            printf("%d",result);
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