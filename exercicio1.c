#include <stdio.h>

main(){
   int idade, mensalidade;

   char nome[20],
   matricula[12],
   endereco[50],
   curso[40],
   periodo[11],
   disciplina[40];
   
    printf("Digite seu nome: ");
    fgets(nome,20,stdin);
    fflush(stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("Digite sua Matricula: ");
    fgets(matricula,12,stdin);
    fflush(stdin);

    printf("Digite seu endereco: ");
    fgets(endereco,50,stdin);
    fflush(stdin);

    printf("Digite seu curso: ");
    fgets(curso,40,stdin);
    fflush(stdin);

    printf("Digite periodo: ");
    fgets(periodo,11,stdin);
    fflush(stdin);

    printf("Digite sua disciplina: ");
    fgets(disciplina,40,stdin);
    fflush(stdin);

    printf("Digite o valor da sua mensalidade: ");
    scanf("%d", &mensalidade);
    fflush(stdin);
    
    printf("\n\n");

    printf("Suas informacoes de cadastro");
    printf("\nSeu nome: %s", nome);
    printf("\nSua idade: %d", idade);
    printf("\nSua matricula: %s", matricula);
    printf("\nSeu endereco: %s", endereco);
    printf("\nSeu curso: %s", curso);
    printf("\nPeriodo em que estuda : %s", periodo);
    printf("\nDisciplina do dia: %s", disciplina);
    printf("\nValor da sua mensalidade: %d", mensalidade);
    return 0;
    
}