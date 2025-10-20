#include <stdio.h>

int main (){

    int i;
    int j = 1;
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavalo = 3;
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

     //--- CAVALO ---
     printf("\nMovimento da Peça: Cavalo\n");
     for ( i = 1; i <= 2; i++)
     {
      printf("Baixo\n");
     }
   
     while (j <= 1)
     {
      printf("Esquerda\n");
      j++;
     }
     
return 0;
}