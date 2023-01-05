#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        if(n>=1){
        printf("*");
        }

        for(int a=2;a<=i;a++){

            printf("**");

        }

        printf("\n");

    }
    for(int s=n-1;s>=1;s--){

        if(s>=1){
        printf("*");
        }

        for(int a=2;a<=s;a++){

            printf("**");

        }

        printf("\n");

    }

}
