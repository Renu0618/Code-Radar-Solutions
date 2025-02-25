#include<stdio.h>
int main()
{
    int age,citizen status;
    scanf("%d",&age,&citizen status);
    if(age>=18 && citizen status == 1) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }
    return 0;
}