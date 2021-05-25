#include <stdio.h>
int main (){
    /*Faça um algoritmo que leia números inteiros e armazene-os na matriz 4x4. Porém, na diagonal principal, não armazene o número lido, e sim um 0 (zero).*/
    int i=0, j=0, num[2][2];
    for (i=0; i<2; i++)
    for (j=0; j<2; j++){
        if (i==j)
        {
            num[i][j]=0;
             printf("Elemento[%d][%d] = %d \n",i,j,num[i][j]);
        } else {
        printf("Elemento[%d][%d] = " ,i,j);
        scanf("%d", &num[i][j]);
        }
        
}
}