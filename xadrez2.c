#include <stdio.h>

//Declaração das funções
void funcaotorre ();
void funcaobispo ();
void funcaorainha ();

int main() {

    //Chamando as funções
    funcaotorre ();
    funcaobispo ();
    funcaorainha ();

    return 0;
}

//Função de repetição referente ao movimento da torre
void funcaotorre (){

    //declaração de variáveis
    int torre, casas;
    int totalCasas = 0;

    //laço de repetição referente ao movimento da torre
    printf("Movimento da torre:\n");
    for (casas = 1; casas <= 5; casas++) {

        printf("Direita\n");
        totalCasas++;
    }
    //Declarando o numero total de casas percorridas pela torre
    printf("O total de casas percorridas pela torre foi de %d casas para a direita.\n", totalCasas);
}

//Função de repetição referente ao movimento do bispo
void funcaobispo (){

    //declaração de variáveis
    int bispo, casas;
    int totalCasas = 0;

    //inicializando a variável casas e totalCasas
    casas = 1;
    totalCasas = 0;
    //laço de repetição referente ao movimento do bispo
    printf("Movimento do bispo:\n");
    do
    {
        printf("Cima, Direita\n");
        casas++;
        totalCasas++;

    } while (casas <= 5);

    //Declarando o numero total de casas percorridas pelo bispo
    printf("O total de casas percorridas pelo bispo foi de %d casas na diagonal cima, direita.\n", totalCasas);

}

//Função de repetição referente ao movimento da rainha
void funcaorainha (){

    //declaração de variáveis
    int rainha, casas;
    int totalCasas = 0;

    //inicializando a variável casas e totalCasas
    casas = 1;
    totalCasas = 0;

    //laço de repetição referente ao movimento da rainha
    printf("Movimento da rainha:\n");
    while (casas <= 8)
    {
        printf("Esquerda\n");
        casas++;
        totalCasas++;
    }
    //Declarando o numero total de casas percorridas pela rainha
    printf("O total de casas percorridas pela rainha foi de %d casas para a esquerda.\n", totalCasas);

}
