#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1,n2,i,lcm,temp;
    puts("Enter two integers: \n");
    scanf("%d %d",&n1,&n2);

    if(n1<n2){
        temp=n1;
        n1=n2;
        n2=temp;
    }

    for(i=n1; i>=n1; i++){

        if(i%n1==0 && i%n2==0){
            lcm=i;
            break;
        }

    }
    printf("%d",lcm);

}
