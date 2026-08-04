#include <stdio.h>
#include <stdlib.h>
int main() {
    int Secratenumber;
    int guess=0;
    int attempt=0;
    int High=0;
    int Low=0;
    Secratenumber= rand() %10 +1;
    while (guess!=Secratenumber)
    {
        printf(" Guess a number between 1-10😇 \n");
        scanf("%d", &guess);
        attempt++;
        if(guess<Secratenumber)
        {  printf("Your Guess is To Low\n");
         Low++;
            } else if(guess>Secratenumber)
            { printf("Your Guess is To Hiht\n");
             High++;
             } 
            } 
            printf("=====Result Of Your Guess===\n");
            printf("You had  %d Values to Low\n", Low);
            printf("You had %d Values to High\n", High);
            printf("Attempt: %d\n", attempt);
            return 0;
            }
        