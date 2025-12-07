#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int tentativas;
int max_number;
int secret_number;
int palpite;

int main(void)
{
    string nome = get_string("Qual é o teu nome? ");
    printf("Olá , %s\n", nome );

    char jogar = get_char("Queres jogar um jogo? (s/n): ");

    if (jogar == 'n')
    {
        printf("Fica para a próxima!\n");
        return 0;
    }

    tentativas = get_int("Quantas tentativas queres? ");
    max_number = get_int("Qual será o número máximo? ");
    
    srand(time(NULL)); // Inicializa o gerador de números aleatorios com uma seed variável
    secret_number = rand() % (max_number + 1); // Gera número de 0 a max_number
   
    palpite = get_int("Em que número estou a pensar? ");
    printf("%i\n" , secret_number); // Debug
    printf("%i\n" , max_number); // Debug 
    printf("%i\n" , tentativas); // Debug
}