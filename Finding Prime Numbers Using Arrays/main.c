#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int i,k;
    int primes[50]={0};
    int index=2;
    bool flag;
    primes[0]=2;
    primes[1]=3;

    for(i=5; i<=100; i+=2){

        flag=true;
        for(k=1; flag && i/primes[k]>=primes[k]; ++k)

            if(i%primes[k]==0)
               flag=false;

            if(flag==true){
                primes[index]=i;
                ++index;
            }

        }


    }
    for(i=0; i<index; i++)
        printf("%i ",primes[i]);

    return 0;
}
