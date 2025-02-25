#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    switch(age) {
        case 1:
            printf("Eligible");
        default:
            printf("Not Eligible");
    }
    return 0;
}