#include <stdio.h>

#include <stdlib.h>

#include "meal.h"

Meal makeMenu[]=
{
    //menu items

    {"Salad", 9.95},

    {"Soup", 4.55},

    {"Sandwich", 13.25},

    {"Pizza", 22.35},
    
};

const int numItems = sizeof(makeMenu)/sizeof(makeMenu[0]);