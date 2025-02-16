#include<stdio.h>
int main()
{
    int cost_price,selling_price;
    scanf("%d %d",&cost_price,&selling_price);
    if(cost_price > selling_price) {
        printf("Loss");
    } else if(selling_price > cost_price) {
        printf("Profit");
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}