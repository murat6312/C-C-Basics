#include <stdio.h>
#include <stdlib.h>

int prime (int);

int main()
{

    printf("Enter two integers:");
    int x,y;
    scanf("%d %d",&x,&y);
    printf("These are the prime numbers between %d-%d:\n",x,y);
    for(int i=x; i<=y; i++){

        if(prime(i)>0){
            printf("%d  ",prime(i));
        }

    }

}

int prime (int num){

    for(int i=2; i<=num/2; i++){

        if(num%i==0){
            return 0;
        }

    }return num;

}
