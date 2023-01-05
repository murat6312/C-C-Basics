#include <stdio.h>
#include <stdlib.h>

int binary(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",binary(n));

}

int binary(int n){

    int binaryNum=0;

    for(int i=1;n!=0;i*=10){

        binaryNum+=n%2*i;
        n/=2;

    }return binaryNum;

}
