#include<stdio.h>

 /*
    vetores ---> nome_variavel[] ou nome_variavel[3] ou
    nome_variavel[3] = {0, 1, 2} ou nome_variavel[5] = {0, 1, 2}//+ 0, 0} os 2 restantes valores o compilador identifica como 0
    */
   
int main(){
    double notas[2] = {10,8};


    for(int i = 0; i < 2; i++){
    printf("%f\n", notas[i]); 

    }

    notas[0] = 7;
    notas[1] = 7;

    for(int i = 0; i < 2; i++){
    printf("%f\n", notas[i]); 

    }

    printf("\n");
    printf("Tamanho dos vetores: %lld",sizeof(notas)/sizeof(notas[0]));


    printf("\n");
    // Calcular a media das duas notas 
    printf("A media das duas notas e: %.2f", (notas[0] + notas[1]) / 2 );
    return 0;
}

