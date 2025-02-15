#include<stdio.h>
int main()
{
    int a,b,ch;
    int add,sub,multi,div;
    scanf("%d %d",&a,&b);
    if(ch==1)
    {
        add=a+b;
        printf("%d",add);
    } else if (ch==2) {
        sub=a-b;
        printf("%d",sub);
    } else if (ch==3) {
        multi = a*b;
        printf("%d",multi);
    } else if (ch==4) {
        div = a/b;
        printf("%d",div);
    } else {
        printf("error");
    }
    return 0;
}