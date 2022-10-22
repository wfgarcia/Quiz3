#include <stdio.h>

#include <stddef.h>

typedef struct{

    //properties of meals
    char *name;

    double price;

} meal, *ptrToMeal;

typedef const meal *ptrToConstMeal;