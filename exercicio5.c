#include <stdio.h>
int main (){
//5º problema: desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos funcionários de uma empresa. Na sequência, deve ler o salário de cada um dos 50 funcionários, calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste sobre os respectivos salários atuais. Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.
float salario, salarioReajustado, porcentagemReajuste, maiorSalario=0;
int a=1, numeroFuncionarios;
for(a=1; a<=numeroFuncionarios;a++){
    printf("Qual eh a porcentagem de reajuste? \n");
    scanf("%f", &porcentagemReajuste);
    printf("Qual eh o salario atual do empregado? \n");
    scanf("%f", &salario);
    salarioReajustado=salario+((porcentagemReajuste/100)*salario);
    printf("O salário reajustado eh de %.2f reais. \n", salarioReajustado);
    if (salario>maiorSalario){
        maiorSalario=salario;
    }
}
printf("O maior salario reajustado da empresa eh de %.2f reais.\n ", maiorSalario);
}