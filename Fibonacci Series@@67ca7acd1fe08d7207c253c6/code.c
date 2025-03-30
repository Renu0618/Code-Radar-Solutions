#include<stdio.h>
void fibonacci(int n){
    int a = 0;
    int b = 1;
    int c;
    for (int i = 0; i<n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}































