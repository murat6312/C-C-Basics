#include <stdio.h>
#include <stdlib.h>

int prime(int);

int main()
{
    int sum;
    printf("Enter an integer:\n");
    scanf("%d",&sum);
    printf("%d is sum of these two prime numbers:",sum);
    for(int i=2; i<sum; i++){

        if(prime(i)+prime(sum-i)==sum){
            printf("%d-%d  ",i,sum-i);
        }

    }

}

int prime(int num){
    if(num<2){
        return 0;
    }
    if(num==2){
        return 2;
    }
    for(int i=2; i<num; i++){

        if(num%i==0){
            return 0;
        }

    }return num;

}
