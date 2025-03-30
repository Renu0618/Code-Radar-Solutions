int fibonacciSeries(int N) {
    int a = 0;
    int b = 1;
    for(int i = 0;i<N;i++) {
        printf("%d ",a);
        int temp = a;
        a = b;
        b = temp;
        b = a+b;
    }
}































