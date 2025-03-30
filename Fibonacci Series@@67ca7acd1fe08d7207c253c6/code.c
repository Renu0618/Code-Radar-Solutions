int fibonacciSeries(int N) {
    int a=0;
    int b=1;
    for(int i=0;i<N;i++) {
        printf("%d",a);
        int c=a;
        a=b;
        b=c;
        b=a+b;
    }
}































