/*Escreva um programa que leia o n�mero de um funcion�rio, seu n�mero de horas trabalhadas, o valor que recebe por hora e calcula o sal�rio desse funcion�rio. 
A seguir, mostre o n�mero e o sal�rio do funcion�rio, com duas casas decimais.

Entrada
O arquivo de entrada cont�m 2 n�meros inteiros e 1 n�mero com duas casas decimais, representando o n�mero, quantidade de horas trabalhadas e o valor que o 
funcion�rio recebe por hora trabalhada, respectivamente.

Sa�da
Imprima o n�mero e o sal�rio do funcion�rio, conforme exemplo fornecido, com um espa�o em branco antes e depois da igualdade. No caso do sal�rio, tamb�m 
deve haver um espa�o em branco ap�s o $.*/

#include <stdio.h>
 
int main() {
    int funcionario, horas;
    float valorHora, salario;
    scanf("%d", &funcionario);
    scanf("%d", &horas);
    scanf("%f", &valorHora);
    salario = horas * valorHora;
    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}
