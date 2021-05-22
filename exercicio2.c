#include <stdio.h>
void main (){
//2º problema: desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.
int a=1, b, maior=0;
for (a=1; a<=5; a++) {
    printf("Digite o número desejado: \n");
    scanf("%d", &b);
    if (b>maior) {
        maior=b;
    }
    printf("O valor digitado foi: %d e o maior número é %d\n", b, maior);

}
}