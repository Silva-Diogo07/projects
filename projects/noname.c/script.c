#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

/* ===================== ENUMS ===================== */

typedef enum
{
    Converters = 1,
    Games,
    Calculators
} programType;

typedef enum
{
    tempConverter = 1,
    weightConverter
} convertersPrograms;

typedef enum
{
    GN = 1,
    RPS
} gamesPrograms;

typedef enum
{
    circleCalculator = 1,
    compundCalculator
} calculatorPrograms;

/* ===================== MENUS ===================== */

void subMenu(programType program_type)
{
    switch (program_type)
    {
        case Converters:
            printf("Converters:\n");
            printf("1. Temperature Converter\n");
            printf("2. Weight Converter\n");
            break;

        case Games:
            printf("Games:\n");
            printf("1. Guess the Number\n");
            printf("2. Rock Paper Scissors\n");
            break;

        case Calculators:
            printf("Calculators:\n");
            printf("1. Circle Calculator\n");
            printf("2. Compound Interest Calculator\n");
            break;

        default:
            printf("Invalid option. Try again.\n");
            break;
    }
}

/* ===================== CONVERTERS ===================== */

void convertersProgram(convertersPrograms program)
{
    switch (program)
    {
        case tempConverter:
            printf("Temperature Converter (not implemented yet)\n");
            break;

        case weightConverter:
            printf("Weight Converter (not implemented yet)\n");
            break;

        default:
            printf("Invalid option.\n");
            break;
    }
}

/* ===================== GUESS THE NUMBER ===================== */

void secret_number(int *secret)
{
    int max;

    printf("Enter the max number: ");
    if (scanf("%d", &max) != 1 || max <= 0)
    {
        printf("Invalid max number.\n");
        return;
    }

    *secret = (rand() % max) + 1;
}

void ask_for_trys(int *tries)
{
    printf("Enter how many tries you want: ");
    scanf("%d", tries);
}

void ask_for_guess(int *guess)
{
    printf("What's your guess? ");
    scanf("%d", guess);
}

bool check_guess(int *guess, int *secret, int *tries)
{
    if (*guess > *secret)
    {
        printf("Lower\n");
        (*tries)--;
        return false;
    }
    else if (*guess < *secret)
    {
        printf("Higher\n");
        (*tries)--;
        return false;
    }

    printf("You guessed right!\n");
    return true;
}

bool askPlayAgain(void)
{
    char choice;

    printf("Play again? (y/n): ");
    scanf(" %c", &choice);  // espaço antes do %c é IMPORTANTE

    return (choice == 'y' || choice == 'Y');
}


void play(int *tries, int *secret)
{
    int guess;

    ask_for_trys(tries);
    secret_number(secret);

    do
    {
        ask_for_guess(&guess);
    }
    while (!check_guess(&guess, secret, tries) && *tries > 0);

    if (*tries == 0)
    {
        printf("You LOST!\n");
    }
}

/* ===================== RUNNERS ===================== */

void runGuessTheNumber(void)
{
    int tries = 0;
    int secret = 0;

    do
    {
        play(&tries, &secret);
    }
    while (askPlayAgain());
}

void runRockPaperScissors(void)
{
    printf("Rock Paper Scissors (not implemented yet)\n");
}

/* ===================== GAMES MENU ===================== */

void gamesProgram(gamesPrograms program)
{
    switch (program)
    {
        case GN:
            runGuessTheNumber();
            break;

        case RPS:
            runRockPaperScissors();
            break;

        default:
            printf("Invalid option.\n");
            break;
    }
}

/* ===================== CALCULATORS ===================== */

void calculatorProgram(calculatorPrograms program)
{
    switch (program)
    {
        case circleCalculator:
            printf("Circle Calculator (not implemented yet)\n");
            break;

        case compundCalculator:
            printf("Compound Interest Calculator (not implemented yet)\n");
            break;

        default:
            printf("Invalid option.\n");
            break;
    }
}

/* ===================== MAIN ===================== */

int main()
{
    srand(time(NULL));

    programType program_type;
    int program;
    int input;

    printf("Choose a type of program (1-3):\n");
    printf("1. Converters\n");
    printf("2. Games\n");
    printf("3. Calculators\n\n");

    if (scanf("%d", &input) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    program_type = (programType)input;

    if (program_type < Converters || program_type > Calculators)
    {
        printf("Invalid option.\n");
        return 1;
    }

    subMenu(program_type);

    printf("Choose a program:\n");

    if (scanf("%d", &program) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (program < 1 || program > 2)
    {
        printf("Invalid option.\n");
        return 1;
    }

    switch (program_type)
    {
        case Converters:
            convertersProgram((convertersPrograms)program);
            break;

        case Games:
            gamesProgram((gamesPrograms)program);
            break;

        case Calculators:
            calculatorProgram((calculatorPrograms)program);
            break;
    }

    return 0;
}
