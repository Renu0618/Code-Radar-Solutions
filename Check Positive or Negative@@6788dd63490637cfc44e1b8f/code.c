#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n > 0) {
        printf("%d Positive",n);
    } else if(n <0) {
        printf("%d Negative",n);
    } else {
        print("%d Zero",n);
    }
    return 0;
}