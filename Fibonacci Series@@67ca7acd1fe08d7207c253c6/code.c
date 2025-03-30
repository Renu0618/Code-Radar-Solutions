#include<stdio.h>
int fibonacciSeries(int n);
int main() {
    int n;
    scanf("%d",&n);

    fibonacciSeries(n);

    return 0;
}
int fibonacciSeries(int n) {
    if(n<=0) {
        printf("Invalid input\n");
        return 0;
    }
    int fibonacciSeries1 = fibonacciSeries(n-1);
    int fibonacciSeries2 = fibonacciSeries(n-2);
    int fibonacciSeriesN = fibonacciSeries(n-1) + fibonacciSeries(n-2);
    return fibonacciSeriesN;
}































