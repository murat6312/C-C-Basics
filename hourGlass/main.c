#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, n;
    printf("Enter an integer : ");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++){
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++){
            printf("*");
        }
    printf("\n");
    }

    for(i=2; i<=n; i++){

        for(j=n; j>i; j--){
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++){
            printf("*");
        }
    printf("\n");
    }

}
