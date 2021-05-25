#include <stdio.h>
void main (){
    /*Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor.

    Na sequência, leia uma lista de 10 números inteiros e verifique se cada um deles está contido em alguma posição do vetor. Em caso positivo, mostre a posição do vetor em que ele se encontra.

    Estrutura de dados: Um vetor de 50 posições de números inteiros.

    Comando de repetição: PARA (FOR), pois sabemos que leremos e processaremos 50 elementos. Logo, teremos uma solução com número fixo e conhecido de vezes.*/
    int qtdeNumeros, a, num;
    printf("Digite a quantidade de numeros desejada: \n");
    scanf("%d", &qtdeNumeros);
    int vet[qtdeNumeros], ver[10], achou;

    printf("Digite o numero e aperte enter: \n");

    for (a=0;a<qtdeNumeros;a++){
        scanf("%d", &vet[a]);
    }
    printf("Digite os numeros que deseja buscar no vetor: \n");

    for (a=0; a<qtdeNumeros; a++){
        scanf("%d", &num);

    a=0;
    achou=0;
    while (a<qtdeNumeros && achou==0){
        if (num==vet[a]) 
        achou=1;
        else a++;
    }
        if (achou==1)
        printf("acho na posicao: %d\n",a);
        
        else 
        printf ("nao achou o numero\n");
    }

}