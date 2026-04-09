#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // generate random number
    srand(time(0));
    int random = (rand() % 10) + 1;
    int no_of_guesses = 0;
    int input = 5;

    printf("Guess the Number (between 1 and 10)\n");

    do
    {
        printf("Enter the number: ");
        scanf("%d", &input);
        no_of_guesses++;

        if (input < random)
        {
            printf("Higher number please\n");
        }
        else if (input > random)
        {
            printf("Lower number please\n");
        }

    } while (input != random);

    printf("🎉 You guessed the number in %d guesses!\n", no_of_guesses);

    return 0;
}