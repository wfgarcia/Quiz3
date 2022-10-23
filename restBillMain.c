#include <string.h>

#include <stdlib.h>

#include <time.h>

#include "meal.h"

float calculateBill(int tax, int tip, double price){
    float newTax = (float)tax/100;
    float newTip = (float)tip/100;
    float totalWTax;
    float totalWTip;
    float total;
    // calculate tax with percent 
    totalWTax = (float)price * newTax;
    // calculate tip with percent
    totalWTip = (float)price * newTip;
    
    return total = totalWTax + totalWTip + (float)price;
}

int main(void){
    int tax;
    int tip;
    float total;

    extern Meal makeMenu[]; 
    extern const int numItems;
    //prints meal options 
    
    //selects random meal
    srand(time(NULL));
    int item = rand() % 4;
    //takes value for tax and tip in percentage
    printf("%s, %.2f\n", makeMenu[item].name, makeMenu[item].price);
    printf("What is the tax for the item(round to nearest whole decimal):\n");
    scanf("%d", &tax);
    printf("what is the tip you want to leave(round to nearest whole decimal):\n");
    scanf("%d", &tip);
    //calculate tax and tip
    total = calculateBill(tax, tip, makeMenu[item].price);
    //total bill 
    printf("%.2f\n", total);
    //display final bill with items 
}