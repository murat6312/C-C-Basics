#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tau,x,count=0;

    scanf("%d",&x);

    for(int i=1; i<=x; i++){

        for(int k=1; k<=i; k++){

            if(i%k==0){
                count++;
            }

        }
        if(i%count==0){
            tau=i;
            printf("%d is tau number\n",tau);
        }
        count=0;
    }
}
