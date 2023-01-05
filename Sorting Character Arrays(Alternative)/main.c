#include <stdio.h>
#include <string.h>

int main()
{
    int wordCount;
    printf("Enter how many words you are going to use:");
    scanf("%d",&wordCount);

    char words[wordCount][50], temp[2];
    printf("Enter the words:");
    for(int i=0; i<wordCount; i++){
        scanf("%s",words[i]);
    }

    for(int a=0; a<wordCount; a++){

        for(int i=a+1; i<wordCount; i++){

            if(strcmp(words[a],words[i])>0){
                strcpy(temp,words[a]);
                strcpy(words[a],words[i]);
                strcpy(words[i],temp);
            }

        }
    }
    printf("Words in dictionary order:\n");

    for(int i=0; i<wordCount; i++){
        puts(words[i]);
    }

}
