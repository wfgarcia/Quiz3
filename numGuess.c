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
    int compare;
    srand(time(NULL));
    //picks number
    answer = (rand() % (max - 1 + 1) - 1);
    //checks number
    printf("%d", answer);
    while(done == 0){
        scanf("%d", &input);
        compare = answer - input;
        if(compare < 0 ){
            printf("too small try again\n\n");
        }
        if (compare > 0){
            printf("too big try again\n\n");
        }
        if (compare == 0){
            printf("you win\n\n");
            done++;
        }
    }
    //if number is less than or greater tha
}

int main(){
    int option;
    int loop = 0;
    int Max = 10;
    //main menu
   
    //decides what to do
    
    while(loop == 0){
        while(loop == 0){
            mainMenu();
            scanf("%d", &option);
            if(option == 1 || option == 2 || option == 3){
                loop ++;
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
        loop ++;
        }
    }
    //places number

    //quits program
    printf("thank you for playing");
}