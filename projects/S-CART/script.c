#include <stdio.h>
#include <string.h>

int main()
{
    char item[40] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0;

    printf("What item would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0';

    printf("What is the price for each? ");
    scanf("%f", &price);

    printf("How many do you want to buy? ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\n");

    if (quantity == 1)
    {
        printf("You have bought %d %s\n", quantity, item);
    }
    else
    {
        printf("You have bought %d %ss\n", quantity, item);
    }

    printf("Total is: %c%.2f\n", currency, total);

    return 0;
}