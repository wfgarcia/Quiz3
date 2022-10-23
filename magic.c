#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int square[3][3]= {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}
};

int values[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// check inputs 





// print final array




// change values 
void random(){
    for(int i = sizeof(values); i > 0; i--){
        int r = (rand() % (i + 1));
        int temp = values[i];
        values[i] = values[r];
        values[r] = temp;
    }
}




//generates random grids
void createGrid(){
    random();
    int n = 0;
}
int main(void){
    srand(time(NULL));

    // declare array
    int puzzle[][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    };

    int found = 0;
    int count = 0;


    // loop number of times it takes
    while(found == 0){
        
    }




}