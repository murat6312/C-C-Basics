#include <stdio.h>
#include <stdlib.h>

int combination(int n, int k);
void pascaltriangle(int n);

int main(void)
{
    int row;
    scanf("%d",&row);
    pascaltriangle(row);

}

int combination(int n, int k){

    int u=1,d1=1,d2=1;
    for(int i=n; i>=1; i--){
        u*=i;
    }
    for(int a=k; a>=1; a--){
        d1*=a;
    }
    for(int b=n-k; b>=1; b--){
        d2*=b;
    }

    return u/(d1*d2);
}

void pascaltriangle(int n){

    for(int a=0; a<=n; a++){

    printf("\n");
         for(int b=a; b<=n; b++){
            printf("\t");
         }
         for(int c=0; c<=a; c++){
            printf("%d\t",combination(a,c));
            printf("\t");
         }

    }

}
