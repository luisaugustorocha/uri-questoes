/*Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. Utilize a f�rmula:

MaiorAB = (a + b + abs(a-b)) / 2

Entrada
O arquivo de entrada cont�m tr�s valores inteiros.

Sa�da
Imprima o maior dos tr�s valores seguido por um espa�o e a mensagem "eh o maior".*/

#include <stdio.h>
 
int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    if (A > B && A > C) {
        printf("%d eh o maior\n", A);
    }
    if (B > A && B > C) {
        printf("%d eh o maior\n", B);
    }
    if (C > A && C > B){
        printf("%d eh o maior\n", C);
    }
    
    return 0;
}
