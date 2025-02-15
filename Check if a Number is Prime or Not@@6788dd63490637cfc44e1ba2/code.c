#include<stdio.h>
int main()
{
    int n;
    int flag = 0;
    scanf("%d",&n);
    for (int i=2; i*i <= n; i++) {
        if (n % i == 0){
            flag = 0;
            break;
        } else if(n % i! = 0) {
            flag = 1;
        }
    }
    if (n == 2) {
        printf("Prime");
    } else if(n == 1){
        printf("Not Prime");
    } else if(n == 0) {
        printf("Not Prime");
    } else if( !flag) {
        printf("Not Prime");
    } else {
        printf("Prime");
    }
    return 0;
}