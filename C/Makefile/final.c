#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int max(int max)
{
    printf("Qual será o número máximo? ");
    scanf("%d" , &max);
}

int numero_secreto(int secret , int max)
{
    // Muda a seed para o número inicial não ser sempre o mesmo
    srand(time(NULL));
    // Picks a randomized number
    secret = rand() % (max + 1);
    scanf("%d" , &secret);
}

int main(void)
{
    printf("Debug | O número máximo é : %d" , max);
}


// scanf("formato" , &variavel)
// exemplo :
// scanf("%d" , &tries)