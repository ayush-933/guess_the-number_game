#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int random_number=(rand() %100) + 1;
    int no_of_guesses=0;
    int guessed_number;
    
    do{
        printf("guess the number:");
        scanf("%d",&guessed_number);
        if(guessed_number>random_number){
            printf("guess a lower number\n");
        }else if(guessed_number<random_number){
            printf("guess a higher number\n");
        }
        else{printf("congratulations you guessed the right number\n");}
        no_of_guesses ++;

        }while(guessed_number!=random_number);
        printf("number of guesses:%d\n",no_of_guesses);
        
        


        
        return 0;

    }

