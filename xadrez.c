#include <stdio.h>

int main (){

    int i;
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int contador = 0;
    int passo = 0;

    //--- TORRE ---
    printf("Movimento da Peça: Torre.\n");
    for (int i = 0; i < casasTorre; i++)
    {
        printf("Direita\n");
    }

    //--- BISPO ---
    printf("\nMovimento da Peça: Bispo.\n");
     while (contador < casasBispo)
     {
        printf("Cima Direita\n");
        contador++;
     }

     //--- RAINHA ---
     printf("\nMovimento da Peça: Rainha.\n");
     do
     {
        printf("Esquerda\n");
        passo++;
     } while (passo < casasRainha);

return 0; 
}