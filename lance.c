#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int codigo, quantidade;
    double preco;
    char produto[128];

    printf("Codigo do produto: ");
    scanf("%d", &codigo);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

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

    printf("%.2f euros por %d %s/s", preco * quantidade, quantidade, produto);


    return 0;
}