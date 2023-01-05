#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int first, int last, int x);

int main()
{
    int size,x,result;

    printf("Enter size of the array:");
    scanf("%d",&size);
    int array[size];

    printf("Enter the elements:");
    for(int i=0; i<size; i++){
        scanf("%d",&array[i]);
    }

    printf("Enter element to find:");
    scanf("%d",&x);

    result=binarySearch(array,0,size-1,x);
    if(result==0){
        printf("Element is not exist in the array!");
    }else if(result==1){
        printf("Element is exist in the array!");
    }

}

int binarySearch(int arr[], int first, int last, int x){

    while(last>=first){

        int middle=(first+last)/2;

        if(arr[middle]==x){
            return 1;
        }else if(arr[middle]<x){
            first=middle+1;//X bu aralýkta deðilse +1 ve -1
        }else             //looptan çýkýþý saðlar
            last=middle-1;//algoritmaya uygun olduðundan koda zararda vermez

    }
    return 0;
}
