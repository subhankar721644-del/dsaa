#include<stdio.h>
void bubblesort(int arr[],int size){
    for(int step=0;step<size-1;step++){
       int swapped=0;
        for(int i=0;i<size-step-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
               swapped++;
               printf("\npass %d: ",step+1);
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
            }
        
        }
       if(swapped==0){
            break;
        }
      }
        
 }



int main(){
    int data[] = {1,2,3,4,6,7,5};
    int size = sizeof(data)/sizeof(data[0]);
    bubblesort(data, size);
    printf("sorted array :\n");
    for(int i=0;i<size;i++){
        printf("%d ", data[i]);
    }
    return 0;
}