#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    char lista[][50] = {"Banana","Laranja", "Maçã", "Limão", "Pera", "Uva", "Melancia", "Maracujá", "Mamão", "Kiwi"};

    printf("\n\nLista de palavras:\n");
    for(int i = 0; i < 10; i++){
        printf("%s\n", lista[i]);
    }

    printf("\n\nPalavra sorteada:");
    int x = rand()%10;
    printf("\n%s\n", lista[x]);

    return 0;
}