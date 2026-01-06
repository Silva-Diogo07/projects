#include <stdio.h>

int main()

{
    int choice = 0;
    float celcius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature convertor\n");

    printf("\n");
    printf("Choose an option:\n");

    printf("\n");
    printf("1. Celcius to fahrenheit\n");
    printf("2. Fahrenheit to celcius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter how many celcius do you want to convert: ");
        scanf("%f", &celcius);
        fahrenheit = (celcius * 9 / 5) + 32;
        printf("%.1f celcius is equal to %.1f fahrenheit\n", celcius, fahrenheit);
    }
    else if (choice == 2)
    {
        printf("Enter how many fahrenheit do you want to convert: ");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f fahrenheit is equal to %.1f celcius\n", fahrenheit, celcius);
    }
    else
    {
        printf("Invalid choice! Enter 1 or 2\n");
    }

    return 0;
}