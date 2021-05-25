#include <stdio.h>
void main (){
    /*Em uma turma com 50 alunos, cada um faz 3 provas por semestre. Além de armazenar as 3 provas dos 50 alunos, existe a necessidade de mostrar:
    A média de cada prova.
    A média de cada aluno.
    A média da turma.*/
    int numeroAlunos, a;
    float mediaProva, mediaTurma, somaP1=0, somaP2=0, somaP3=0;
    printf("Digite o numero de alunos: \n");
    scanf("%d", &numeroAlunos);
    float prova1[numeroAlunos], prova2[numeroAlunos], prova3[numeroAlunos], mediaAluno[numeroAlunos];
    for (a=0; a<numeroAlunos; a++){
        printf("Digite a nota da primeira prova do %d.o aluno: \n", a+1);
        scanf("%f", &prova1[a]);
        somaP1=somaP1+prova1[a];
   
        printf("Digite a nota da segunda prova do %d.o aluno: \n", a+1);
        scanf("%f", &prova2[a]);
        somaP2=somaP2+prova2[a];
 
        printf("Digite a nota da terceira prova do %d.o aluno: \n", a+1);
        scanf("%f", &prova3[a]);
        somaP3=somaP3+prova3[a];

        mediaAluno[a]=(prova1[a]+prova2[a]+prova3[a])/3;
        printf("A media do %d.o aluno eh de %.2f. \n", a+1, mediaAluno[a]);
        mediaTurma=mediaTurma+mediaAluno[a];
    }
    printf("A media da prova 1 eh de %.2f.\n", somaP1/numeroAlunos);
    printf("A media da prova 2 eh de %.2f.\n", somaP2/numeroAlunos);
    printf("A media da prova 3 eh de %.2f.\n", somaP3/numeroAlunos);

    printf("A media da TURMA eh de %.2f.\n", mediaTurma/numeroAlunos);
}
