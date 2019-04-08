#include <stdio.h>

int main(){
    int atual, anterior, numRepetido, qtdRepeticoes = 1, cont, i = 0;
    printf("\nENTRADA: ");
    do{
        printf(">>");
        scanf("%d", &atual);
        if(i == 0 || atual != anterior){
            anterior = atual;
            cont = 1;
        }else{
            cont++;
        }

        if(cont > qtdRepeticoes){
                qtdRepeticoes = cont;
                numRepetido = anterior;
        }
    }while(++i < 10);
    printf("\n\nSAIDA: O numero repetido mais vezes consecutivas foi %d com %d repeticoes consecutivas\n\n", numRepetido, qtdRepeticoes);
	return 0;
}
