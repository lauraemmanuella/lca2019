#include <stdio.h>
#include <string.h>

struct Livro{
    char titulo[50];
    char autor[50];
    float preco;
    int quantidade;
};

void cadastrar(struct Livro l[], int *cont){
    printf("Titulo do Livro: ");
    setbuf(stdin, NULL);
    gets(l[*cont].titulo);
    printf("Autor: ");
    gets(l[*cont].autor);
    printf("Preco: ");
    scanf("%f", &l[*cont].preco);
    printf("Quantidade disponivel: ");
    scanf("%d", &l[*cont].quantidade);
    (*cont)++; //colocar os paranteses para indicar que vai alterar o valor apontado pelo ponteiro (*cont)
}

void listar(struct Livro l[], int cont){
    printf("\nTitulo\t\tAutor\t\tPreco\t\tQuantidade\n");
    for(int i = 0; i < cont; i++){
        printf("%s\t%s\t%.2f\t\t%d\n", l[i].titulo, l[i].autor, l[i].preco, l[i].quantidade);
    }
}

int buscar(struct Livro l[], int cont, char titulo[50]){
    for(int i = 0; i < cont; i++){
        if(strcasecmp(titulo, l[i].titulo)==0){
            return i;
        }
    }
    return -1;
}

void modificar(struct Livro l[], int cont, char titulo[50]){
    int i = buscar(l, cont, titulo); //busca registro com nome passado pelo usuario e recebe o indice dele dentro do vetor
    //atualiza registro, caso ele exista
    if(i != -1){
        printf("Titulo do Livro: ");
        setbuf(stdin, NULL);
        gets(l[i].titulo);
        printf("Autor: ");
        gets(l[i].autor);
        printf("Preco: ");
        scanf("%f", &l[i].preco);
        printf("Quantidade disponivel: ");
        scanf("%d", &l[i].quantidade);
    }
    else
        printf("\nLivro nao encontrado\n");
}

void venda(struct Livro l[], int cont, char titulo[]){
    int i = buscar(l,cont, titulo);
    if(i != -1){
        int quantidade;
        printf("\nInforme a quantidade desejada: ");
        scanf("%d", &quantidade);
        if( quantidade <= l[i].quantidade){
            l[i].quantidade -= quantidade;
            printf("Total: %.2f\n", l[i].preco * quantidade);
        }
        else{
            printf("Quantidade insuficiente\n");
        }
    }
    else{
        printf("Livro nao encontrado\n");
    }
}



