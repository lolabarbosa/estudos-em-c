#include <stdio.h>
void main(){
char inicial;
int idade;
printf("Entre com a sua idade e a sua inicial:\n");
scanf("%d %c", &idade, &inicial); //se tirar o espaço entre os parametros, o enter eh memorizado
printf("Voce tem %d anos e seu nome comeca com %c\n", idade, inicial);
}