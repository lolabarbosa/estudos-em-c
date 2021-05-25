#include <stdio.h>
int main (){
    /*Faça um algoritmo que leia dados inteiros e armazene-os em uma matriz 3x4. Em seguida, mostre a quantidade de números pares e ímpares armazenados na matriz.*/
    int num[3][4], i=0, j=0, par=0, impar=0;
    printf("Digite os numeros desejados: \n");
    for (i=0; i<3; i++){
    for (j=0; j<4; j++){
        printf ("\nElemento[%d][%d] = ", i, j);
            scanf("%d", &num[i][j]);
            if (num[i][j]%2==0){
            par++;
            }            else {
            impar++; }
        }
    }
        printf("\n\n********* Saida de Dados ********* \n\n");
        printf("Ha %d numeros pares na matriz.\n",par);
        printf("Ha %d numeros impares na matriz.\n",impar);
}