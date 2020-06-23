/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

MaiorAB = (a + b + abs(a-b)) / 2

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".*/

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
