#include <stdio.h>

int main(){
    int i = 0, num, maior, cont;
    do{
        printf(">>");
        scanf("%d", &num);
        if(i == 0 || num > maior){
            maior = num;
            cont = 1;
        }else if(num == maior){
            cont++;
        }
    }while(++i < 10);

    
    printf("\n\nSAIDA: O maior numero lido foi %d com %d repeticoes\n\n", maior, cont);
	return 0;
}
