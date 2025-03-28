#include<stdio.h>
void bubbleSort(int arr[],int n);
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
    
    return 0;
}
void bubbleSort(int arr[],int n){
    printfArray(arr,n);
}