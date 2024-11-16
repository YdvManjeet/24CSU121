#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayChoice(int choice)
{
    switch (choice)
    {
    case 1:
        printf("Rock");
        break;
    case 2:
        printf("Paper");
        break;
    case 3:
        printf("Scissors");
        break;
    }
}

int main()
{
    int userChoice, computerChoice;
    srand(time(0)); // Seed for random number generation

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your choice:\n1. Rock\n2. Paper\n3. Scissors\n");
    scanf("%d", &userChoice);

    if (userChoice < 1 || userChoice > 3)
    {
        printf("Invalid choice! Please enter 1, 2, or 3.\n");
        return 1;
    }

    // Generate computer's choice based on a random number
    int randNum = rand() % 100;
    if (randNum < 33)
        computerChoice = 1; // Rock
    else if (randNum < 66)
        computerChoice = 2; // Paper
    else
        computerChoice = 3; // Scissors

    printf("You chose: ");
    displayChoice(userChoice);
    printf("\nComputer chose: ");
    displayChoice(computerChoice);
    printf("\n");

    // Determine the winner
    if (userChoice == computerChoice)
    {
        printf("It's a tie!\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) || // Rock beats Scissors
             (userChoice == 2 && computerChoice == 1) || // Paper beats Rock
             (userChoice == 3 && computerChoice == 2))   // Scissors beats Paper
    {
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }

    return 0;
}
