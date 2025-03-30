#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int max=arr1[0];
    int min=arr1[0];
    for(int i=1;i<N;i++) {
        if(arr1[i] < min) {
            min= arr1[i];
        }
        if(arr1[i] > max) {
            max = arr1[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}