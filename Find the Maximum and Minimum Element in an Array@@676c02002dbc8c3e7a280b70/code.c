#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=1;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int max=0;
    int min=0;
    for(int i=1;i<N;i++) {
        if(arr[i] > min)
            min= arr[i];
         else if(max < arr[i])
            max = arr[i];
        }
        printf("%d %d",max,min);
}