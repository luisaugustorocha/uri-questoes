/*Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno. A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 2, 
a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.

Entrada
O arquivo de entrada cont�m 3 valores com uma casa decimal, de dupla precis�o (double).

Sa�da
Imprima a vari�vel MEDIA conforme exemplo abaixo, com 1 d�gito ap�s o ponto decimal e com um espa�o em branco antes e depois da igualdade. Assim como todos 
os problemas, n�o esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".*/

#include <stdio.h>
 
int main() {
    float A, B, C, MEDIA;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    MEDIA = (A * 2 + B * 3 + C * 5) / (2 + 3 + 5);
    printf("MEDIA = %.1f\n", MEDIA);
    return 0;
}
