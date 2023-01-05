#include <stdio.h>
#include <stdlib.h>

void sortedArray(int [],int);

int main(void)
{

    int size;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int array[size];

    printf("\nEnter all the elements:");
    for(int i=0; i<size; i++){
        printf("\n%d> : ",i+1);
        scanf("%d",&array[i]);
    }

    sortedArray(array,size);

}

void sortedArray(int array[],int size){

    int x,pos=-1;
    printf("\nEnter the element to delete: ");
    scanf("%d",&x);

    for(int i=0; i<size; i++){

        if(array[i]==x){
            pos=i+1;
        }

    }

    if(pos < 0 || pos > size)
    {
        printf("Invalid element! Please enter position between 1 to %d", size);
    }else{
        for(int i=pos-1; i<size-1; i++){
            array[i]=array[i+1];
        }
        size--;
    }
    printf("\nFixed array is: ");

    for(int i=0; i<size; i++){
        printf("\n%d> %d",i+1,array[i]);
    }

}
