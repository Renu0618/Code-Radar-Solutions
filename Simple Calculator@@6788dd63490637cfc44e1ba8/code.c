#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char operator;
    scanf("%c",&operator);
    if(operator == '+') {
        printf("%d",a+b);
    }
    else if(operator == '-') {
        printf("%d",a-b);
    }
    else if(operator == '*') {
        printf("%d",a*b);
    }
    else if(operator == '/') {
        if (b == 0) {
            printf("error");
        }
        else {
            printf("%d",a/b);
        }
    }
    else {
        printf("error");
    }
    return 0;
}