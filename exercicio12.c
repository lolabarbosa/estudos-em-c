#include <stdio.h>
void main (){
    //Faça um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou superiores à média da turma.
    int a, numeroAlunos;
    printf("Digite o número de alunos: \n");
    scanf("%d", &numeroAlunos);
    float nota[numeroAlunos], mediaAlunos, soma;
    for (a=0; a<numeroAlunos; a++){
        printf("Digite a nota do %d.o aluno: \n", a+1);
        scanf("%f", &nota[a]);
        soma=soma+nota[a];
    }
    mediaAlunos=soma/numeroAlunos;
    printf("A media da turma eh de %.2f. \n", mediaAlunos);
    for (a=0; a<numeroAlunos; a++){
        if (nota[a]>=mediaAlunos){
            printf("O %d.o aluno teve media igual ou maior que a media da turma. \n", a+1);
    }
    }
}