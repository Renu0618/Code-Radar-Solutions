#include<stdio.h>
void bubbleSort();
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n; i++) {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    printfArray(arr,n);
    return 0;
}
void bubbleSort(){
    printf()
}