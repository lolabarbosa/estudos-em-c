#include <stdio.h>
void main (){
    //3º problema: desenvolva um programa que leia o salário bruto de 15 funcionários de uma empresa, calcule e exiba o salário líquido de cada funcionário. Lembre-se que o salário líquido é calculado abatendo o imposto do salário bruto, com base nesta tabela de imposto. Ao final, mostre o total de salários brutos, salários líquidos e impostos de todos os funcionários.
    float salarioBruto, salarioLiquido, imposto;
    int a, numeroFuncionarios;
    printf("Qual eh o numero de funcionarios? \n");
    scanf("%d", &numeroFuncionarios);
    for (a=1; a<=numeroFuncionarios; a++){
        printf("Digite o salario do funcionario: \n");
        scanf("%f", &salarioBruto); 
        if(salarioBruto>0 && salarioBruto <=999) //10% de imposto
        {
            salarioLiquido= salarioBruto - (salarioBruto*0.1);
            imposto=salarioBruto*0.1;
        } else if (salarioBruto>999 && salarioBruto<=1999) //15% de imposto
        {
            salarioLiquido= salarioBruto - (salarioBruto*0.15);
            imposto=salarioBruto*0.15;
        } else if (salarioBruto>1999 && salarioBruto<=9999) //20% de imposto
        {
            salarioLiquido= salarioBruto - (salarioBruto*0.2);
            imposto=salarioBruto*0.2;
        } else if (salarioBruto>9999 && salarioBruto<=99999) //25% de imposto
        {
            salarioLiquido= salarioBruto - (salarioBruto*0.25);
            imposto=salarioBruto*0.25;
        } else //30%
        {
            salarioLiquido= salarioBruto - (salarioBruto*0.3);
            imposto=salarioBruto*0.3;
        }
        printf("O salario bruto do %d.o funcionario eh de %.2f reais. \nO valor de imposto eh de %.2f reais.\nO valor do salario liquido eh de %.2f reais. \n", a, salarioBruto, imposto, salarioLiquido);
    }
}