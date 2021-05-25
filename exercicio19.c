#include <stdio.h>
int main (){
    //Faça um algoritmo que leia uma matriz 4x4 de números inteiros. Gere uma segunda matriz, na qual as linhas são as colunas da matriz 1, e as colunas são as linhas da matriz 1.
    int i=0, j=0, num[2][2], mat[2][2];
    printf("Digite os numeros desejados para a matriz: \n");
    for (i=0; i<2; i++)
    for (j=0; j<2; j++){
        printf("Elemento [%d][%d] = ", i,j);
        scanf("%d", &num[i][j]);
        printf ("\n");
        mat[j][i]=num[i][j];
    }

    printf("Matriz gerada: \n");
    for (i=0; i<2; i++)
    for (j=0; j<2; j++){
        printf("\nElemento [%d][%d] = %d", i,j, mat[i][j]);
    }
    
}