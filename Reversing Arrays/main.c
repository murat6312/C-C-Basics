#include <stdio.h>
#include <stdlib.h>

void inverse(char [],int);

int main(void)
{
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    inverse(s,n);
}

void inverse(char s[],int index){

    int start=0,end=index-1,temp;
    while(start<end){

        temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;

    }printf("%s",s);

}
