#include<stdio.h>
void insertionsort(int arr[],int size){
    for(int step=1;step<size;step++){
        int key=arr[step];
        int j=step-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
        printf("\npass %d: ",step+1);
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    }
}
int main(){
    int data[] = { 12, 11, 13, 5, 6, 9, 30, 4, 1, 0, 2};
    int size = sizeof(data)/sizeof(data[0]);
    insertionsort(data, size);
    printf("sorted array :\n");
    for(int i=0;i<size;i++){
        printf("%d ", data[i]);
    }
    return 0;
}