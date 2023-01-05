#include <stdio.h>
#include <stdlib.h>

#define WIDTH 50
#define HEIGHT 50

int pen=0;// 0 pen is up, 1 is down
int direction=0;// 0 = right, 1 = left, 2 = up, 3 = down
int a=0,b=0;

void printOrders();
void storeOrders(int [WIDTH][HEIGHT], int);
void forward(int [WIDTH][HEIGHT], int);
void printGraph(int [WIDTH][HEIGHT]);

int main()
{
    int n;
    int groundArray[WIDTH][HEIGHT]={0};
    printOrders();
    for(int i=0; i<100; i++){
        printf("Enter your order:");
        scanf("%d",&n);
        storeOrders(groundArray,n);
        if(n==7){
            break;
        }
    }

}
void printGraph(int groundArray[WIDTH][HEIGHT]){

    for(int a=0; a<50; a++){

        for(int b=0; b<50; b++){

            if(groundArray[a][b]==1){
                printf("*");
            }
            else if(groundArray[a][b]==0){
                printf(" ");
            }
        }
        printf("\n");
    }

}

void forward(int groundArray[WIDTH][HEIGHT], int x){

    if(pen==1){

        for(int i=0; i<x; i++){

            if(direction==0){
                groundArray[a][b]=1;
                b++;
            }
            else if(direction==1){
                groundArray[a][b]=1;
                a++;
            }
            else if(direction==2){
                groundArray[a][b]=1;
                b--;
            }
            else if(direction==3){
                groundArray[a][b]=1;
                a--;
            }

        }

    }
    else{

        for(int i=0; i<x; i++){

            if(direction==0){
                groundArray[a][b]=0;
                b++;
            }
            else if(direction==1){
                groundArray[a][b]=0;
                a++;
            }
            else if(direction==2){
                groundArray[a][b]=0;
                b--;
            }
            else if(direction==3){
                groundArray[a][b]=0;
                a--;
            }

        }

    }

}

void storeOrders(int groundArray[WIDTH][HEIGHT], int n){

    switch(n){

        case 1:
            pen=0;
            break;
        case 2:
            pen=1;
            break;
        case 3:
            direction++;
            direction %= 4;
            break;
        case 4:
            direction--;
            direction %= 4;
            if(direction<0){
                direction *= -1;
                if(direction==1){//While turning left program was not
                    direction=3;//going upwards.This algorithm solves it.
                }
            }
            break;
        case 5:
            forward(groundArray,10);//Count of * can be modified here
            break;
        case 6:
            printGraph(groundArray);
            break;
        case 7:
            printf("Finished!");
            break;
        default:
            printf("Enter a valid number for your order!");

    }

}
void printOrders(){

    printf("Order\t\tMeaning\n");
    printf("1\t\tpen up\n");
    printf("2\t\tpen down(use this to write)\n");
    printf("3\t\tturn right\n");
    printf("4\t\tturn left\n");
    printf("5\t\tmove \n");
    printf("6\t\tPrint!\n");
    printf("7\t\tFinish!\n");

}
