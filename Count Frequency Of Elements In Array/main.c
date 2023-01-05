#include <stdio.h>
#include <stdlib.h>


int main()
{

    int array[10]={2,5,6,3,2,8,7,5,6,8};
    int frequency[10]={0};

    for(int i=0; i<10; i++){
        ++frequency[array[i]];
    }
    for(int i=0; i<10; i++){
        printf("Number %d's frequency is : %d\n",i,frequency[i]);
    }

}
