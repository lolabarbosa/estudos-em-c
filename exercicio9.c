#include <stdio.h>
int main (){
    // desenvolva um programa que leia uma sequência de números, podendo terminar com o número 0 ou 9. Para cada número lido (diferente de 0 ou 9), mostre seu sucessor caso o número seja par, ou seu antecessor se o número for ímpar.
    int num;
    do {
        printf("Digite um numero: \n");
        scanf("%d", &num);
        if (num!=0 && num!=9){
            printf("O numero lido foi %d.\n", num);
            if (num%2==0){
                printf("O sucessor do numero %d eh %d. \n", num, num+1);
            }
            else 
                printf("O antecessor do numero %d eh %d. \n", num, num-1);
        }
        }
        while (num!=0 && num!=9);
        return 0;
}