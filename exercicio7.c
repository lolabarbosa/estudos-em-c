#include <stdio.h>
int main (){
    //desenvolver um programa que leia uma sequência de números inteiros terminada em zero e mostre cada número lido (exceto o zero).
    int num;
    printf("Digite o um numero: \n");
    scanf("%d", &num);      
    while (num!=0)
    {
        printf("O numero lido foi %d. \n", num);
        printf("Digite um numero: \n");
        scanf("%d", &num);
    }
    return 0;
} 