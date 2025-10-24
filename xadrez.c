#include <stdio.h>

//--- TORRE ---
void moverTorre(int casas, int atual){
    if(atual > casas)
    return;
    printf("Cima\n");
    moverTorre(casas, atual +1);
}

//--- BISPO ---
void moverBispo(int i, int limite){
    if(i > limite) 
    return;

    for (int j = 1; j <= limite; j++)
    {
        for (int h = 1; h <= limite; h++)
        {
            printf("Cima\n");
            printf("Direita\n");
        }
        
    }
    moverBispo(i + 1, limite);
    
}

//--- RAINHA ---
void moverRainha(int casas, int atual){
    if (atual > casas)
    return;
    {
        printf("Cima\n");
        printf("Direita\n");
    }
    moverRainha(casas, atual + 1);
}

//--- CABALO ---
void moverCavalo() {
    printf("\n--- Movimento do Cavalo ---\n");
    for (int i = 1; i <= 3; i++) { 
        for (int j = 1; j <= 3; j++) { 

            if (!(i == 2 && j == 1)) {
                continue;
            }

            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");

            break;
        }

        if (i == 2) break;
    }
}

//--- FUNÇÃO PRINCIPAL ---
int main(){

    int casasTorre = 3;
    int casasBispo = 2;
    int casasRainha = 3;

    printf("--- Movimento da Torre ---\n");
    moverTorre(casasTorre, 1);

    printf("\n--- Movimento do Bispo ---\n");
    moverBispo(1, casasBispo);

    printf("\n--- Movimento da Rainha ---\n");
    moverRainha(casasRainha, 1);

    moverCavalo();

    return 0;
}