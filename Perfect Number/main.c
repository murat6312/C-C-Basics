#include <stdio.h>
#include <stdlib.h>

int perfectNum(int a);

int main()
{

    puts("enter two integers:\n");
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    if(n1>n2){
        int temp;
        temp=n1;
        n1=n2;
        n2=temp;
    }

    for(int i=n1; i<=n2; i++){

        if(i==perfectNum(i)){
            printf("%d is perfect\n",i);
        }

    }

}

int perfectNum(int a){

    int sum=0;

    for(int i=1; i<a; i++){

        if(a%i==0){
            sum+=i;
        }

    }
    if(a==sum){
        return a;
    }else return 0;

}
