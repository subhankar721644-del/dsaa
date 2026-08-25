#include<stdio.h>
void selectionsort(int arr[],int size){
    for(int step=0;step<size-1;step++){
        int min_idx=step;
        for(int i=step+1;i<size;i++){
            if(arr[i]<arr[min_idx]){
                min_idx=i;
            }
        }
        int temp=arr[min_idx];
        arr[min_idx]=arr[step];
        arr[step]=temp;
        printf("\npass %d: ",step+1);
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    }
}
int main(){
    int data[] = { 11,18,95,49,30,20,7,9,2,0,1};
    int size = sizeof(data)/sizeof(data[0]);
    selectionsort(data, size);
    printf("sorted array :\n");
    for(int i=0;i<size;i++){
        printf("%d ", data[i]);
    }
    return 0;
} 

   