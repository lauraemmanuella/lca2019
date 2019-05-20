#include <stdio.h>

int main(){
    int tam;
    
    printf("\nInforme o tamanho da matriz quadrada: ");
    scanf("%d", &tam);

    int matriz[tam][tam];

    printf("\nPreencha os elementos da matriz\n");
    for(int i = 0; i < tam; i++){
        printf("\nLinha %d\n", i);
        for(int j = 0; j < tam; j++){
            scanf("%d", &matriz[i][j]);
        }
    } 

    printf("\nMatriz lida:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int soma=0;
    for(int i = 0, j = tam -1; i < tam; i++, j--){ //laco para percorrer a diagonal secundaria
        soma += matriz[i][i]; //soma os elementos da diagonal principal [i][i]
        if(i != j) //se nao for diagonal principal (i == j)
            soma += matriz[i][j]; //soma os elementos da diagonal secundaria [i][j]
    }

    printf("\nSoma das diagonais: %d\n", soma);

    return 0;
}