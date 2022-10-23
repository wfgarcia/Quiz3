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
int check(int sq[3][3]){
    int isTrue = 1;
    for(int x = 0; x < 3; x++){
        int xSum = 0;
        for(int y = 0; y < 3; y++){
            xSum += sq[x][y];
        }
        if(xSum != 15){
            isTrue = 0;
        } 
    }

    for(int y = 0; y < 3; y++){
        int ySum = 0;
        for(int x = 0; x < 3; x++){
            ySum += sq[x][y];
        }
        if(ySum != 15){
            isTrue = 0;
        }
    }

    if(sq[0][0] + sq[1][1] + sq[2][2] != 15){
        isTrue = 0;
    }
    if(sq[2][0] + sq[1][1] + sq[0][2] != 15){
        isTrue = 0;
    }

    return isTrue;
}




// print final array
void printFin(int sq[3][3]){
    printf("\n");

    for(int i =0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j == 0){
                printf("[ ");
            }
            printf("%d ", sq[i][j]);
        }
        printf("]\n");
    }
}



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
    int v = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            square[i][j] = values[v];
            v++;
        }
    }
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