    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("A torre se move para a Direita\n");
        moverTorre(casas-1);
    }

}

    void moverRainha(int casas)
{
    if (casas>0)
    {
        printf("A rainha se move para a Esquerda\n");
        moverRainha(casas-1);
    }

}
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    void moverBispo(int casas)
{
    while(casas > 0)
    {
        for(int i = 0; i<1; i++)
        {
            printf("O bispo se move para a direita\n");
        }
    printf("O bispo se move para cima\n");
    casas--;
    }
}

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.



#include <stdio.h>

int main(){


    return 0;
}