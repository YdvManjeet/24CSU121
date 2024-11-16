/* Tic Tac Toe Game
The working of tic tac toe game is same as traditional tic tac toe having
following components:
•Objective: To be the first to make a straight line with either ‘X’ or ‘O’.
•Game Board: The board consists of a 3×3 matrix-like structure, having 9 small
 boxes.
•The computer: Since it is a two-player game each player gets one chance
alternatively. i.e.; first player1 than player2.
•Moves: The computer starts the game with O. After that player makes moves
alternatively.
•Winning: You win by making your symbol in a row or diagonal or column. Also, as
a part of strategy you need to block your opponent from forming a straight line
while making of your own.*/
#include <stdio.h>

#define SIZE 3
char board[SIZE][SIZE]; // 3x3 board for Tic Tac Toe

// Function prototypes
void initializeBoard();
void displayBoard();
int checkWin();
void makeMove(char symbol);

int main()
{
    int winner = 0;
    char currentPlayer = 'O'; // Computer starts with 'O'

    printf("Welcome to Tic Tac Toe!\n");
    initializeBoard();

    for (int moves = 0; moves < SIZE * SIZE; moves++)
    {
        displayBoard();
        printf("Player %c, make your move.\n", currentPlayer);
        makeMove(currentPlayer);

        if (checkWin())
        {
            displayBoard();
            printf("Player %c wins!\n", currentPlayer);
            winner = 1;
            break;
        }

        // Switch players
        currentPlayer = (currentPlayer == 'O') ? 'X' : 'O';
    }

    if (!winner)
    {
        displayBoard();
        printf("It's a draw!\n");
    }

    return 0;
}

// Initialize the board with numbers 1-9 for empty positions
void initializeBoard()
{
    int position = 1;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            board[i][j] = '0' + position++;
        }
    }
}

// Display the current state of the board
void displayBoard()
{
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1)
                printf("|");
        }
        printf("\n");
        if (i < SIZE - 1)
            printf("---+---+---\n");
    }
    printf("\n");
}

// Check if there is a winning combination
int checkWin()
{
    // Check rows and columns
    for (int i = 0; i < SIZE; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    return 0;
}

// Make a move on the board
void makeMove(char symbol)
{
    int move;
    int row, col;

    while (1)
    {
        printf("Enter the position (1-9) to place your %c: ", symbol);
        scanf("%d", &move);

        // Convert move to board coordinates
        row = (move - 1) / SIZE;
        col = (move - 1) % SIZE;

        // Check if the position is valid
        if (move >= 1 && move <= 9 && board[row][col] != 'X' && board[row][col] != 'O')
        {
            board[row][col] = symbol;
            break;
        }
        else
        {
            printf("Invalid move! Try again.\n");
        }
    }
}
