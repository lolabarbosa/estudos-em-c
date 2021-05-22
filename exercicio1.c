#include <stdio.h>
void main (){
int a, b=1;
printf("Digite um número: \n");
scanf("%d", &a);
for (b=1; b<=20; b++){
    printf("O número foi %d foi printado %d vezes. \n", a, b);
}
}