#include <stdio.h>
//4º problema: desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada um deles. Lembre-se que apenas a média igual ou acima de 7 aprova o aluno.
int main(){
    int alunos, a=1, provas, b=1;
    float nota1, nota2, nota3, soma=0, media, nota;
    printf("Digite o numero de alunos: \n");
    scanf("%d", &alunos); //numero de alunos
    printf("Digite o numero de provas: \n");
    scanf("%d", &provas); //numero de provas
    for (a=1;a<=alunos;a++){
        for (b=1;b<=provas;b++){
            printf("Digite a %d.a nota do %d.o aluno: \n", b,a);
            scanf("%f", &nota);
            soma=soma+nota;
        }
        media=soma/provas;
        if (media>=7){
            printf("O aluno esta aprovado com a media de %.2f! \n", media);

        } else if (media>=5 || media<7){
            printf("O aluno esta em recuperacao com a media de %.2f! \n", media);

        } else {
            printf("O aluno esta reprovado com a media de %.2f! \n", media);

        }
        }
    }
