#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,noGuesses=1;
    srand(time(0));
    number = rand()%10 + 1;
    //printf("The number is %d",number);
    do{
        printf("Guess the No between 1 to 10\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower No Please!!!");
        }
        else if(guess<number){
            printf("Higher No please!!!");
        }
        else{
            printf("Wow!!! You win in %d chances",noGuesses);
        }
        noGuesses++;
    }while(guess!=number);
    getch();
   return 0;
}
