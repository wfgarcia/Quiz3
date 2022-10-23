#include <stdio.h>

#include <stdlib.h>

#include <time.h>
void mainMenu(){
    printf("Press 1 to play a game\n");
    printf("Press 2 to change max value\n");
    printf("Press 3 to quit\n");
}

void game(int max){
    int answer;
    int done = 0;
    int input;
    srand(time(NULL));
    //picks number
    answer = (rand() % (max - 1 + 1) - 1);
    //checks number
    //printf ("%d\n", answer);
    printf("pick a number between 1 and %d\n", max);
    while(done == 0){
        scanf("%d", &input);
        if(input < answer ){
            printf("too small try again\n");
        }
        else if (input > answer){
            printf("too big try again\n");
        }
        else{
            printf("you win\n");
            done++;
        }
    }
    //if number is less than or greater tha
}

int main(){
    int option;
    int loop1 = 0;
    int Max = 10;
    int loop2 = 0;
    //main menu
   
    //decides what to do
    
    while(loop1 == 0){
        while(loop2 == 0){
            mainMenu();
            scanf("%d", &option);
            if(option == 1 || option == 2 || option == 3){
                loop2 ++;
            }
        }
        if(option == 1){
        game(Max);
        }
        if(option == 2){
        printf("Set your max value:\n");
        scanf("%d", &Max);
        }
        if(option == 3){
        loop1 ++;
        }
        loop2 = 0;
    }
    //places number

    //quits program
    printf("thank you for playing");
}