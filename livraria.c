#include <stdio.h>
#include "livraria.h"

#define TAM 10

int main(){
    struct Livro l[TAM];
    int cont = 0;
    int opcao;
    char titulo[50]; //nome que sera procurado para modificacao
    do{
        printf("\n------------Livraria--------\n");
        printf("1-Cadastrar novo livro\n");
        printf("2-Listar livros cadastrados\n");
        printf("3-Modificar informacoes de livro\n");
        printf("4-Realizar venda de livro\n");
        printf("5-Sair\n");
        printf("----------------------------------\n");
        scanf("%d", &opcao);
        switch(opcao){
        case 1:
            if(cont < TAM){
                cadastrar(l, &cont);
            }
            else
                printf("\nRegistro sem espaco\n");
            break;
        case 2:
            listar(l, cont);
            break;
        case 3:
            printf("\nInforme o nome do produto: ");
            setbuf(stdin, NULL);
            gets(titulo);
            modificar(l, cont, titulo);
            break;
        case 4:
            printf("\nInforme o nome do produto: ");
            setbuf(stdin, NULL);
            gets(titulo);
            venda(l, cont, titulo);
            break;
        case 5:
            break;
        default:
            printf("\nOpcao Invalida\n");
        }
    }while(opcao != 5);
	return 0;
}
