#include<stdio.h>
int getNthBit(int n,int num) {
    return (n >> num) & 1;
}
int main()
{
    int n,num;
    scanf("%d %d",&n,&num);
    int bitValue = getNthBit(n,num);
    printf("%d",n,bitValue);
    return 0;
}