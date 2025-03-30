#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    scanf("%d",&n);

    fib(n);

    return 0;
}
int fib(int n) {
    if(n<=0) {
        return 0;
    }
    int fib1 = fib(n-1);
    int fib2 = fib(n-2);
    int fibN = fib(n-1) + fib(n-2);
    return fibN;
}