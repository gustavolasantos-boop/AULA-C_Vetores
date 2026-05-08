#include <stdio.h>

int main(){

    //char valor = 'c';
    //char palavra[5] = {'c', 'a', 's', 'a','\n', '\0'};// \0 usado para finalização
    //printf("%s", palavra)
    char nome[20]; // = "Erick Yamamoto"; // = {'e','r','i','c','k'};
    printf(" Digite seu nome: ");
    //scanf("%s, nome"); // Não aceita espaço, considera espaço como finalizção
    fgets(nome, 20, stdin);
    printf("O seu nome e: %s", nome);

    return 0;



}