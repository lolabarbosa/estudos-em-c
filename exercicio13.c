#include <stdio.h>
void main (){
    /*Leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu. 
    Estrutura de dados: O vetor vai armazenar 5 números inteiros. Cada posição do vetor vai acumular a quantidade de vezes que cada vogal (A, E, I, O, U) apareceu. O índice 0 (zero) corresponde ao total de vogais “A”, o índice 1 corresponde à vogal “E”, e assim sucessivamente, até o índice 4, que vai armazenar a vogal “U”. */
char letra;
int vet[5]={0,0,0,0,0};
printf("Digite uma letra e aperte enter: \n");
scanf("%c", &letra);
while (letra!='z'){
    switch (letra)
    {
        case 'a': vet[0]++;
        break;
        case 'e': vet[1]++;
        break;
        case 'i': vet[2]++;
        break;
        case 'o': vet[3]++;
        break;
        case 'u': vet[4]++;
        break;
    }
    scanf("%c", &letra);
    }
    printf("A vogal a foi digitada %d vezes. \n", vet[0]);
    printf("A vogal e foi digitada %d vezes. \n", vet[1]);
    printf("A vogal i foi digitada %d vezes. \n", vet[2]);
    printf("A vogal o foi digitada %d vezes. \n", vet[3]);
    printf("A vogal u foi digitada %d vezes. \n", vet[4]);
}