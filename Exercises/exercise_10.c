#include <stdio.h>
#include <stdbool.h>

int main()
{
    const double STUDENT_DISCOUNT = 0.9;
    const double SENIOR_DISCOUNT = 0.8;
    const double BOTH_DISCOUNT = 0.7;

    double price = 10.00;
    bool isStudent = false;
    bool isSenior = true;

    if (isSenior && isStudent)
    {
        printf("You get a 30 percent discount\n");
        price *= BOTH_DISCOUNT;
    }
    else if(isSenior)
    {
        printf("You get a 20 percent discount\n");
        price *= SENIOR_DISCOUNT;
    }
    else if (isStudent)
    {
        printf("You get a 10 percent discount\n");
        price *= STUDENT_DISCOUNT;
    }
    else
    {
        printf("No discount applied\n");
    }
    printf("The price of the ticket is: $%.2f\n", price);
    
    return 0;
}