#include<stdio.h>
int fibonacciSeries(int n);
int main()
{
    int n;
    scanf("%d",&n);

    fibonacciSeries(n);

    return 0;
}
int fibonacciSeries(int n) {
    if(n<=0) {
        return 0;
    }
    int fibonacciSeries1 = fib(n-1);
    int fibonacciSeries2 = fib(n-2);
    int fibonacciSeriesN = fib(n-1) + fib(n-2);
    return fibonacciSeriesN;
}