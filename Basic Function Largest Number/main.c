#include <stdio.h>
#include <stdlib.h>

int largestOfTwo(int x,int y);

int main()
{

    int n1,n2,n3;
    puts("Enter three integers: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(largestOfTwo(n1,n2)<=largestOfTwo(n2,n3)){
        printf("%d",largestOfTwo(n2,n3));
    }else
    printf("%d",largestOfTwo(n1,n2));

}

int largestOfTwo(int x,int y){

        if(x==y){
            return x;
        }else if(x<y){
            return y;
        }else return x;

    }
