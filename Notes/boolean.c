#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    char name[] = "Michael";
    bool isOnline = false;

    if (isOnline)
    {
        printf("%s is online", name);
    }
    else
    {
        printf("%s is NOT online", name);
    }

    return 0;
}