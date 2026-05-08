#include<stdio.h>

 /*
    vetores ---> nome_variavel[] ou nome_variavel[3] ou
    nome_variavel[3] = {0, 1, 2} ou nome_variavel[5] = {0, 1, 2}//+ 0, 0} os 2 restantes valores o compilador identifica como 0
    */

int main(){
    float notas[] = {0, 0}, soma;
    int quantidade_notas;
    
    printf("Digite a quantidade de notas que queira lançar: ");
    scanf("%d" , &quantidade_notas);
   

    for(int i = 0; i < quantidade_notas; i++){
        printf("Digite sua nota %d: ", i + 1);// i + 1 para não começar do 0 
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

   

    printf("\n");
    printf("Tamanho do vetor: %d",sizeof(notas)/sizeof(notas[0]));


    printf("\n");
    // Calcular a media das duas notas - automatica
    printf("A media das duas notas e: %.2f", soma/quantidade_notas);
    return 0;
}