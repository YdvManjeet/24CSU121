/*The Hangman Game is one of the most famous games played on computers.
The Rules of the game are as follows:
1.There is given a word with omitted characters and you need to guess the characters to win the game.
2.Only 3 chances are available and if you win the Man survives or Man gets hanged.
So, it is the game can be easily designed in C language with the basic knowledge of if-else statements, loops, and some other basic statements. The code of the game is easy, short, and user-friendly.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[] = "shinchan";    // The word to guess
    char display[] = "_h_nc__n"; // The partially hidden word
    int chances = 3;             // Number of chances allowed
    int correctGuesses = 0;      // Tracks correct guesses

    int wordLength = strlen(word); // Length of the word
    int hiddenCount = 0;           // Count of hidden letters to guess

    // Count how many letters are hidden
    for (int i = 0; i < wordLength; i++)
    {
        if (display[i] == '_')
        {
            hiddenCount++;
        }
    }

    printf("Welcome to Hangman!\n");
    printf("Guess the word: %s\n", display);
    printf("You have %d chances to guess the correct letters.\n", chances);

    while (chances > 0 && correctGuesses < hiddenCount)
    {
        char guess;
        int found = 0; // Tracks if the guess is correct

        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess); // Convert guess to lowercase

        // Check if the guessed letter is in the word
        for (int i = 0; i < wordLength; i++)
        {
            if (word[i] == guess && display[i] == '_')
            {
                display[i] = guess; // Reveal the letter in the display word
                correctGuesses++;
                found = 1;
            }
        }

        // Feedback for the player
        if (found)
        {
            printf("Correct! %s\n", display);
        }
        else
        {
            chances--;
            printf("Incorrect. You have %d chances left.\n", chances);
        }
    }

    // Determine if the player won or lost
    if (correctGuesses == hiddenCount)
    {
        printf("Congratulations! You've guessed the word: %s\n", word);
        printf("The man survives!\n");
    }
    else
    {
        printf("Game over. You've run out of chances.\n");
        printf("The correct word was: %s\n", word);
        printf("The man gets hanged.\n");
    }

    return 0;
}
