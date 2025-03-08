#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<=N;i++)
    {
        for(int j=i;j<=N;j++)
        printf(" ");
        for(int j=1;j<=i;j++)
        printf("%d ",j);
        for(int j=i-1;j>0;j--)
        printf("%d ",j);
    printf("\n");
    }
}