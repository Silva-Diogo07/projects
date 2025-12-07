#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar o número secreto
int gerar_numero(int max_number)
{
    srand(time(NULL));
    return rand() % (max_number + 1);
}

// Função principal do jogo (futuro: pode ter várias tentativas)
void jogar(int tentativas, int max_number)
{
    int secret_number = gerar_numero(max_number);

    printf("Estou a pensar num número entre 0 e %d...\n", max_number);

    int palpite = get_int("Qual é o teu palpite? ");

    // Debug
    printf("\nDEBUG\n");
    printf("Número secreto: %d\n", secret_number);
    printf("Tentativas: %d\n", tentativas);
    printf("Máximo: %d\n", max_number);
}

int main(void)
{
    string nome = get_string("Qual é o teu nome? ");
    printf("Olá, %s!\n", nome);

    char jogar_ou_nao = get_char("Queres jogar um jogo? (s/n): ");

    if (jogar_ou_nao == 'n')
    {
        printf("Fica para a próxima!\n");
        return 0;
    }

    int tentativas = get_int("Quantas tentativas queres? ");
    int max_number = get_int("Qual será o número máximo? ");

    jogar(tentativas, max_number);
}
