#include <stdio.h>
void main (){
//    6º problema: desenvolva um programa que leia um número N e, em seguida, uma lista de N números inteiros. Este programa também deve calcular e mostrar a soma dos números pares e dos números ímpares da lista.
int quantidadeNumeros, numero, somaPares=0, somaImpares=0, a=1;
printf("Quantidade de números a serem lidos: ");
scanf("%d", &quantidadeNumeros);
for (a=1; a<=quantidadeNumeros; a++){
printf("Digite o %d.o número: ", a);
scanf("%d", &numero);
if(numero%2==0){
    somaPares=somaPares+numero;
}
else{
    somaImpares=somaImpares+numero;
}
}
printf("A soma dos valores pares eh de %d. \n", somaPares);
printf("A soma dos valores impares eh de %d. \n", somaImpares);

} 