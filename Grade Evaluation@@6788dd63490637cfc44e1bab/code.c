#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch) {
        case 'A':
            printf("Excellent");
        case 'B':
            printf("Good");
        case 'C':
            printf("Average");
        case 'D':
            printf("Below Average");
        case 'F':
            printf("Fail");
        default:
            printf("Invalid grade");
    }
    return 0;
}