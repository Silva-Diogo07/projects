#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef enum
{
    Converters = 1,
    Games,
    Calculators
} programType;

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
            printf("Invalid option. Try again:\n ");
            break;
    }
}

int main()
{
    int program_type = 0;

    printf("Choose a type of program (1-3):\n");

    printf("1. Converters\n");
    printf("2. Games\n");
    printf("3. Calculators\n\n");
    scanf("%d", &program_type);
    
    switch_func(program_type);

    return 0;
}