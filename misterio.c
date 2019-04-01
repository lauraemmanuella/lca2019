#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int misterio, num, cont=0;
    misterio = rand()%10+1;
    printf("\nAdvinhe o numero que estou pensando entre 1 e 10:\n");
    do{
        cont = cont + 1;
        printf(">>");
        scanf("%d", &num);
        if(num > misterio){
            printf("Estah alto\n");
        }else if(num < misterio){
            printf("Estah baixo\n");
        }
    }while(num != misterio);
    printf("\nVoce acertou\n");
    if(cont == 1){
        printf("UAU! De primeira!\n");
    }else if(cont > 3 ){
        printf("UFA! Ateh que enfim\n");
    }
    return 0;
}