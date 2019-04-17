#include <stdio.h>

#define TAM 5

int main(){
    float vetorA[TAM], maior, segundoMaior;
   
    //Entrada
    printf("Informe os valores do vetor:\n");
    for(int i = 0; i < TAM; i++){
        scanf("%f", &vetorA[i]);
    }

    //Inicializa maior e segundoMaior com o primeiro valor do vetor
    maior = segundoMaior = vetorA[0];

    //Verifica os demais valores do vetor
    for(int i = 1; i < TAM; i++){
        if(vetorA[i] > maior){
            segundoMaior = maior;
            maior = vetorA[i];
        }else if( (vetorA[i] > segundoMaior && vetorA[i] != maior) || segundoMaior == maior){
            segundoMaior = vetorA[i];
        }
    }

    printf("Maior: %.2f Segundo Maior: %.2f\n", maior, segundoMaior);
    return 0;
}