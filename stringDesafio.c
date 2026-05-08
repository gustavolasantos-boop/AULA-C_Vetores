#include <stdio.h>
#include<string.h> // biblioteca importante
int main(){

    //char valor = 'c';
    //char palavra[5] = {'c', 'a', 's', 'a','\n', '\0'};// \0 usado para finalização
    //printf("%s", palavra)
    char username[20]; // = "Erick Yamamoto"; // = {'e','r','i','c','k'};
    char padrao[20] = "admin";
    printf(" Usuario: ");
    //scanf("%s, nome"); // Não aceita espaço, considera espaço como finalizção
    fgets(username, 20, stdin);
    printf("%s", username);
    printf("%d e %d\n", strlen(username), strlen(padrao));

    printf("%d\n", strcmp(username, padrao));
    if(strcmp(username, padrao)){
        printf("Acesso Liberado!");
    }else{
        printf("Acesso negado!");

    }

    

    return 0;



}