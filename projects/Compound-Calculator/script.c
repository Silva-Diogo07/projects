#include <stdio.h>
#include <math.h>

int main()
{
    double principal = 0.0;
    double interest_rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate (r): ");
    scanf("%lf", &interest_rate);
    interest_rate = interest_rate / 100;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter number of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + interest_rate / timesCompounded, timesCompounded * years);

    printf("After %d years the total will be £%.2lf\n", years, total);

    return 0;
}