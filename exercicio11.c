#include <stdio.h>
int main(){
    //Faça um programa que leia 100 números inteiros e mostre-os na ordem inversa em que foram lidos.
    int vetor[5], a=0, b=5, num;
    for (a=0; a<5; a++){
        printf("Digite um numero :\n");
        scanf("%d", &num);
        vetor[a]=num;
    }
    for (a=4; a>=0; a--){
        printf("%d \n", vetor[a]);
    }
}