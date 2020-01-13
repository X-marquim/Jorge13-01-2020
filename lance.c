#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int codigoF() {
    int codigo;

    printf("Codigo do produto: ");
    scanf("%d", &codigo);
    return codigo;
}
int quantidadeF() {
    int quantidade;

    printf("Quantidade: ");
    scanf("%d", &quantidade);
    return quantidade;
}

int main() {
    int codigo = codigoF(), quantidade = quantidadeF();

    double preco, total = 1;
    char produto[128], escolha[128];

    switch (codigo)
    {
    case 100:
        strcpy(produto,"Cachorro Quente");
        preco = 2.50;
        break;
    case 101:
        strcpy(produto,"Hambúrger");
        preco = 3.50;
        break;
    case 102:
        strcpy(produto,"Cheeseburger");
        preco = 4.00;
        break;
    case 103:
        strcpy(produto,"Omolete");
        preco = 3.75;
        break;
    case 104:
        strcpy(produto,"Francesinha");
        preco = 7.50;
        break;                                
    default:
        printf("Erro");
        exit(0);
        break;
    }
    printf("%.2f euros por %d %s/s\n\n", preco * quantidade, quantidade, produto);

    printf("Quer compras mais produtos?");
    scanf("%s", escolha);

    if (strcmp(escolha,"sim") == 0) {
        printf("\n\n\n");
        main();
    } else {
        printf("Total: %.2f\n", total);
        printf("Adeus");
    }

    return 0;
}