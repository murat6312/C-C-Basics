#include <stdio.h>
#include <stdlib.h>

int maxNum(int,int,int);

int main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d",a,b,c);

    if(a>0 && a<10 && b>0 && b<10 && c>0 && c<10){

        printf("%d",maxNum(a,b,c));

    }else
    printf("Invalid integers!");

}

int maxNum(int a,int b,int c){

    int largest,middle,smallest;
    if(a>b){
        largest=a;
        smallest=b;
    }else
    largest=b;
    smallest=a;
    if(largest>c){


    }


}
