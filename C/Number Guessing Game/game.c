#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses;
    srand(time(0));
    number = rand()%100 + 1; // Generates a random number between 1 and 100
    // printf("The number is %d\n", number);
    // Keep running the loop until the number is guessed
    int n;
    printf("This is a guess the number game.\n**DRUMROLL**\nHere You can set the difficulty of the 
    printf("Enter the number of tries:");
    scanf("%d",&n);
    printf("You have %d tries to guess the number. \n Best of Luck!!!!!!!!! \n",n);
    for(nguesses = 1; nguesses<=n; nguesses++){
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n%d tries left \n",n-nguesses);
        }
        else if(guess<number){
            printf("Higher number please!\n%d tries left \n",n-nguesses);
        }
        else{
            printf("You guessed it in %d attempts\n", nguesses);
            exit;
        }
    }

    
    return 0;
}
