/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta opera��o � vari�vel PROD. A seguir mostre a vari�vel 
PROD com mensagem correspondente.   

Entrada
O arquivo de entrada cont�m 2 valores inteiros.

Sa�da
Imprima a vari�vel PROD conforme exemplo abaixo, com um espa�o em branco antes e depois da igualdade. N�o esque�a de imprimir o fim de linha ap�s o 
produto, caso contr�rio seu programa apresentar� a mensagem: �Presentation Error�.*/

#include <stdio.h>
 
int main() {
    int A, B, PROD;
    scanf("%d", &A);
    scanf("%d", &B);
    PROD = A * B;
    printf("PROD = %d\n", PROD);
    return 0;
}
