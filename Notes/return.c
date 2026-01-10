#include <stdio.h>

int square(int num)
{
    return num * num;
}

int cube(int num)
{
    return num * num * num;
}

int main()
{
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = square(num);

    cube(num);

    printf("%d\n", result);
    printf("%d\n", cube(num));

    return 0;
}