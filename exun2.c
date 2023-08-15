#include <stdio.h>

int main(){
    //declaração de variaveis de texto
    //chamadas em c de vetores de caracteres
    char nome[20] = "Bruno Henrique 51";
    char endereco[50];
    char matricula[20];
;
    printf(" Nome: %s \n", nome);

    //recebendo dados com scanf

    printf("Digite o endereco \n");
    scanf("%[^\n]", endereco);
    printf("O endereco e: %s");
    fflush(stdin);//limpar buffer do teclado

    //recebendo os dados com fgets
    printf("Digite a matricula");
    fgets(matricula,20,stdin);
    printf("A matricula e: %s", matricula);

    return 0;
}