#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Gera um número secreto aleatório entre 1 e um máximo definido pelo utilizador
void numero_secreto(int *secret)
{
    int max;

    // Pergunta ao utilizador qual será o valor máximo possível
    printf("Qual será o número máximo? ");
    scanf("%d", &max);

    // Inicializa a seed do gerador de números aleatórios
    // time(NULL) garante que o número muda a cada execução
    srand(time(NULL));

    // Gera um número aleatório entre 1 e max
    *secret = (rand() % max) + 1;
}

// Pede ao utilizador o número de tentativas disponíveis
void pedir_tentativas(int *tentativas)
{
    printf("Quantas tentativas queres? ");
    scanf("%d", tentativas);
}

// Pede um palpite ao utilizador
void pedir_palpite(int *palpite)
{
    printf("Qual é o teu palpite? ");
    scanf("%d", palpite);
}

// Verifica se o palpite está correto
// Retorna true se acertar, false caso contrário
bool verificar_palpite(int *palpite, int *secret, int *tentativas)
{
    // Caso o palpite seja maior que o número secreto
    if (*palpite > *secret)
    {
        printf("Mais Baixo\n");
        (*tentativas)--; // Reduz o número de tentativas
        return false;
    }
    // Caso o palpite seja menor que o número secreto
    else if (*palpite < *secret)
    {
        printf("Mais Alto\n");
        (*tentativas)--; // Reduz o número de tentativas
        return false;
    }
    // Caso o palpite esteja correto
    else
    {
        printf("Acertaste\n");
        return true; // Termina o jogo com sucesso
    }
}

int main(void)
{
    int tentativas; // Número de tentativas disponíveis
    int palpite;    // Palpite do jogador
    int secret;     // Número secreto

    // Gera o número secreto
    numero_secreto(&secret);

    // Pergunta quantas tentativas o jogador terá
    pedir_tentativas(&tentativas);

    // Loop principal do jogo:
    // Continua enquanto o jogador não acertar
    // e ainda houver tentativas disponíveis
    do
    {
        pedir_palpite(&palpite);
    }
    while (!verificar_palpite(&palpite, &secret, &tentativas) && tentativas > 0);

    // Se sair do loop sem acertar, o jogador perdeu
    printf("Perdeste\n");

    // Informação de debug (mostra o número secreto)
    printf("\n");
    printf("Debug\n");
    printf("Número Secreto : %d\n", secret);
}

// TODO : playAgain
