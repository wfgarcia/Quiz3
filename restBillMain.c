#include <string.h>

#include <stdlib.h>

#include "meal.h"

int main(void){
    int tax;
    int tip;

    extern Meal makeMenu[]; 
    extern const int numItems;
    //prints meal options 
    
    //selects random meal
    int item = (rand() % (3 - 0 + 1)) + 0;
    //takes value for tax and tip in percentage
    printf("%s, %f\n", makeMenu[item].name, makeMenu[item].price);
    printf("What is the tax for the item(enter percentage as a whole number):\n");
    scanf("%d", &tax);
    printf("what is the tip you want to leave(enter percentage as a whole number):\n");
    scanf("%d", &tip);
    //calculate tax and tip
    calculateBill(tax, tip, makeMenu[item].price);
    //total bill 

    //display final bill with items 
}