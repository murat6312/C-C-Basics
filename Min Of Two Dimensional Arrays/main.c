#include <stdio.h>
#include <stdlib.h>

void sorted(int arr[][4]);
void printArray(int arr[][4]);

int main()
{
    int arr[4][4]={0};
    sorted(arr);
    printArray(arr);

}

void sorted(int arr[][4]){

    for(int a=0; a<4; a++){

        for(int b=0; b<4; b++){

            arr[a][b]=3*(a*b)+2;

        }

    }

}

void printArray(int arr[][4]){

    for(int a=0; a<4; a++){

        for(int b=0; b<4; b++){

            printf("%d\n",arr[a][b]);

        }

    }

}
