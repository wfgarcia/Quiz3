#include <stdio.h>

#include <stddef.h>

typedef struct {

    //properties of meals
    char *name;

    double price;

} Meal, *PtrToMeal;

typedef const Meal *ptrToConstMeal;