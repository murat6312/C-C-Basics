#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,reverseNum=0;
    scanf("%d",&num);
    int origin=num;
    while(num>0){

        reverseNum=reverseNum*10+num%10;
        num/=10;

    }

    printf("reverse number is :\n%d",reverseNum);

    if(reverseNum==origin){
        printf("\nit is a palindrome number");
    }else
        printf("\nit is not palindrome");

}
