#include <stdio.h>
#include <stdlib.h>

void sortedArray(int[],int);

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    sortedArray(array,n);

}

void sortedArray(int arr[],int n){

    int temp;
    for(int rep=1; rep<n; rep++){

        for(int i=0; i<n; i++){

            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    printf("Sorted array is:\n");
    for(int i=0; i<n; i++){
        printf("%d, ",arr[i]);
    }
}
