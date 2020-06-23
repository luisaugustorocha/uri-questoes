/*A fórmula para calcular a área de uma circunferência é: area = π . raio². 
Considerando para este problema que π = 3.14159:
- Efetue o cálculo da área, elevando o valor de Raio ao quadrado e multiplicando por π.

Entrada

A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.

Saída

Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, com 4 casas após o ponto decimal. 
Utilize variáveis de dupla precisão (double). Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, 
caso contrário, você receberá "Presentation Error".*/

package pkg1002_areadocirculo;

import java.io.IOException;
import java.util.Scanner;
import java.text.DecimalFormat;

public class Main {

    public static void main(String[] args) throws IOException {
    
        double A, raio, pi = 3.14159;
        
        Scanner ler = new Scanner(System.in);
        DecimalFormat decimal = new DecimalFormat("0.0000");
        
        raio = ler.nextDouble();
        
        A = pi * Math.pow(raio, 2);
        
        System.out.println("A="+decimal.format(A));
    }
    
}
