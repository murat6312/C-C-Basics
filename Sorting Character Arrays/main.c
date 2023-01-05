#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum[5]={0};
    char array[5][4],temp;//Character arrays ends with 0 so we use 4
    printf("Enter 5 elements to sort each has 3 character:");//instead of 3
    for(int i=0; i<5; i++){
        scanf("%s",array[i]);
    }
    for(int k=0; k<5; k++){

        for(int i=0; i<5; i++){
            sum[i]=0;
            int b=100;

            for(int a=0; a<3 ; a++){
                sum[i]+=array[i][a]*b;
                b/=10;
            }
            if(sum[i+1]<sum[i]&& sum[i+1]>0 && sum[i]>0){
                for(int a=0; a<3 ; a++){
                    temp=array[i][a];
                    array[i][a]=array[i+1][a];
                    array[i+1][a]=temp;
                }
            }
        }
    }
    printf("Your words in dictionary order are: \n");
    for(int i=0; i<5 && array[i]!=0; i++){
        printf("%s ",array[i]);
    }

}
