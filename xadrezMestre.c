#include <stdio.h>

//Declarando a função da rainha
void rainha (int casas){

    //laço de repetição referente ao movimento da rainha
    if (casas <= 8){

        printf("Esquerda.\n");
        rainha(casas + 1);
    }

    
}

//Declarando a função do bispo
void bispo (){

    int Cima = 1;

    //laço de repetição referente ao movimento do bispo
    while (Cima--){
        for (int Direita = 0; Direita < 1; Direita++){

            printf("Direita, ");

        }
        printf("Cima.\n");
    }
    
}

//Declarando a função da torre
void torre (int casas){

    //laço de repetição referente ao movimento da torre
    if (casas <= 5){

        printf("Direita.\n");
        torre(casas + 1);
    }

    
}

//Declarando a função do cavalo
void cavalo (int casas){

    int direita = 1;

    //laço de repetição referente ao movimento do cavalo
    while (direita--){

        for (int i = 0; i < 2; i++){

            printf("Cima, ");

        }
        printf("Direita.\n");

    }


}

//Função principal
void main (){

    //Declarando a variável casas para todas as funções
    int casas = 1;

    //Chamando as funções
    printf("Movimento do cavalo:\n");
    cavalo(casas);
    printf("\n");

    printf("Movimento do bispo:\n");
    for (int quantidade = 0; quantidade < 5; quantidade++){ //Chamando a função 5 vezes para o movimento do bispo
        bispo();
    }
    printf("\n");

    printf("Movimento da torre:\n");
    torre(casas);
    printf("\n");

    printf("Movimento da rainha:\n");
    rainha(casas);

}