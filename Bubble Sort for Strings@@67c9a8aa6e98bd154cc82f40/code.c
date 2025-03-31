#include<stdio.h>
void bubbleSort(str arr[],str n) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i] > arr[j]) {
                char temp=arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void bubbleSort(int arr[], int n) {
    printf("%s",arr[i]);
}