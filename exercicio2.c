#include <stdio.h>


 main() {
    int n1, n2;
    char operador[2];

    printf("1° numero: ");
    scanf("%d", &n1);
    fflush(stdin);

    printf("Digite um operador('+' '-' '/' '*'):  ");
    fgets(operador, sizeof(operador), stdin);
    fflush(stdin);

    printf("2° numero: ");
    scanf("%d", &n2);
    fflush(stdin);

    int adicao = n1 + n2;
    int subtracao = n1 - n2;
    int divisao = n1 / n2;
    int multiplicacao = n1 * n2;

    if (strcmp(operador, "+") == 0) {
        printf("%d", adicao);
    }
    else if(strcmp(operador, "-") == 0){
        printf("%d", subtracao);
    }
    else if(strcmp(operador, "/") == 0){
        printf("%d", divisao);
    }
    else if(strcmp(operador, "*") == 0){
        printf("%d", multiplicacao);
    }
    else{
        printf("operador invalido");
    }

    return 0;
}
