#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int count,upper,lower;
    printf("Enter the count:\nEnter the upper limit:\n"
           "Enter the lower limit:\n");
    scanf("%d%d%d",&count,&upper,&lower);
    srand(time(0));
    for(int i=1; i<=count; i++){

        printf("%d ",lower+rand()%(upper-lower+1));

    }
}
