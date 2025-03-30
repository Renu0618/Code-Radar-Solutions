int fibonacciSeries(int n) {
    int fibonacciSeries1 = fibonacciSeries(n-1);
    int fibonacciSeries2 = fibonacciSeries(n-2);
    int fibonacciSeriesN = fibonacciSeries(n-1) + fibonacciSeries(n-2);
    printf("%d",n,fibonacciSeriesN);
    return fibonacciSeriesN;
}































