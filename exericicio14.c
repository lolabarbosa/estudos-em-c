#include <stdio.h>
    int main(){
        /*Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, observando as seguintes regras:
        Se o número for par, preencha a mesma posição do segundo vetor com o número sucessor do contido na mesma posição do primeiro vetor.
        Se o número for ímpar, preencha a mesma posição do segundo vetor com o número antecessor do contido na mesma posição do primeiro vetor.
        Ao final, mostre o conteúdo dos dois vetores simultaneamente.
        
        Estrutura de dados: Dois vetores de 50 posições de números inteiros.*/
    int a, qtdeNumeros;
    printf("Digite a quantidade de numeros a ser lida: \n");
    scanf("%d", &qtdeNumeros);
    int vetum[qtdeNumeros], vetdois[qtdeNumeros];
    printf("Digite os numeros desejados: \n");
    for (a=0; a<qtdeNumeros; a++){
            scanf("%d",&vetum[a]);
            if (vetum[a]%2==0){
                vetdois[a]=vetum[a]+1;
            } else {
                vetdois[a]=vetum[a]-1;
            }
        }
        printf("O vetor um ficou: \n");
    for (a=0; a<qtdeNumeros; a++)    {
        printf("%d \n", vetum[a]);
    }
    printf("O vetor dois ficou: \n");
    for (a=0; a<qtdeNumeros; a++)    {
        printf("%d \n", vetdois[a]);
    }
    }


     