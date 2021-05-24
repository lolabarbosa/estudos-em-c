#include <stdio.h>
int main (){
    //desenvolver um programa que leia uma sequência de letras (a... z) terminada em ponto (.) e que mostre quantas vezes cada vogal (a, e, i, o, u) apareceu na lista.
    char letra;
    int a=0, e=0, i=0, o=0, u=0;
    printf("Digite uma letra: \n");
    scanf("%c", &letra);
    while (letra!= '.'){
        switch (letra){
            case 'a':
            a++; break;
            case 'e':
            e++; break;
            case 'i':
            i++; break;
            case 'o':
            o++; break;
            case 'u':
            u++; break;
        }
    scanf("%c",&letra);
    }
    printf("A vogal a foi digitada %d vezes. \n", a);
    printf("A vogal e foi digitada %d vezes. \n", e);
    printf("A vogal i foi digitada %d vezes. \n", i);
    printf("A vogal o foi digitada %d vezes. \n", o);
    printf("A vogal u foi digitada %d vezes. \n", u);
    return 0;
}