#include <stdio.h>
#include <stdlib.h>


int serial (int n);

int main()
{
    int n;
    puts("Enter an integer:");
    scanf("%d",&n);
    printf("Serial is :%d",serial(n));
}

int serial (int n){

    int result=0,k=1;

    for(int i=1; i<=n; i++){

        for(int j=i-1; j>=1; j--){

            k*=j;

        }
        result+=(i*k)/i;
        k=1;

    }
    return result;

}
