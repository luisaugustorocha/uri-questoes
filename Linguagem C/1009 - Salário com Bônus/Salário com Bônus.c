/*Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor 
ganha 15% de comiss�o sobre suas vendas efetuadas, informar o total a receber no final do m�s, com duas casas decimais.

Entrada
O arquivo de entrada cont�m um texto (primeiro nome do vendedor) e 2 valores de dupla precis�o (double) com duas casas decimais, representando o sal�rio fixo 
do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.

Sa�da
Imprima o total que o funcion�rio dever� receber, conforme exemplo fornecido.*/

#include <stdio.h>
 
int main() {
    char vendedor;
    double salarioFixo, totalVendas, salarioLiquido;
    
    scanf("%s", &vendedor);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &totalVendas);
    
    salarioLiquido = salarioFixo + (15 * totalVendas) / 100;
    printf("TOTAL = R$ %.2lf\n", salarioLiquido);
    
    return 0;
}
