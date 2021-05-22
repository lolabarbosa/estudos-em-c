#include <stdio.h>
int main (){
    //3º problema: desenvolva um programa que leia o salário de 10 funcionários de uma empresa, calcule e mostre o maior salário e a média salarial da empresa.
    float salario, maiorsa=0, mediasa, soma=0;
    int a=1, numeroFuncionario;
    printf("Digite o número de funcionários: \n");
    scanf("%d", &numeroFuncionario);
    for (a=1; a<=numeroFuncionario; a++){ 
        printf("Qual é o salário do funcionario: \n");
        scanf("%f", &salario);
        soma=soma+salario;
        if (salario>maiorsa){
            maiorsa=salario;
        }  
    }
    mediasa=soma/numeroFuncionario;
    printf("A media salarial é de %.2f reais, e o maior salario e de %.2f reais.\n", mediasa, maiorsa);
    return 0;
}