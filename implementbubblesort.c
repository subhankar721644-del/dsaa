#include<stdio.h>
void  bubblesort(int arr[],int size){
    for(int step = 0; step<size-1;step++){
        for(int i=0;i<size-step-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                printf("\npass %d: ",step+1);
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
            }
          
        }
    } 
}
int main(){
    int data[] = { 10,4,6,7,9,1,3,0,5};
    int size = sizeof(data)/sizeof(data[0]);
    bubblesort(data, size);
    printf("sorted array :\n");
    for(int i=0;i<size;i++){
        printf("%d ", data[i]);
    }
    return 0;
}