#include <stdio.h>
#include <stdlib.h>

struct item {

    char *itemName;
    int quantity;
    float price;
    float amount;

};
void readItem (struct item *I);
void printItem (struct item *I);

int main()
{
    struct item glass;
    struct item *glassPtr=&glass;
    glassPtr->itemName=(char*)malloc(20);
    readItem(glassPtr);
    printItem(glassPtr);
    free(glassPtr->itemName);

}

void readItem (struct item *I){
    printf("Enter an item name, quantity and price:\n");
    scanf("%s%d%f",I->itemName, &I->quantity, &I->price);
    I->amount=I->quantity*I->price;
}

void printItem (struct item *I){

    printf("%s\n%d\n%.2f\nThe amount is:%.2f",I->itemName, I->quantity,
          I->price, I->amount);

}
