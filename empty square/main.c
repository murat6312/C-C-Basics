#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("Enter one edge length of the square: \n");
    scanf("%d",&n);
    if(n>=3){
        for(i=1; i<=n; i++){
            printf("*");
        }
        printf("\n");

        for(i=1; i<=n-2; i++){

            printf("*");
            for(j=1; j<=n-2;j++){
                printf(" ");
            }
            printf("*\n");

        }

        for(i=1; i<=n; i++){
            printf("*");
        }
    }else
    printf("Edge is too small to make a square!");
}
