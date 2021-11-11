#Exercício 01

//Faça um algoritmo que calcule a média aritmética de quatro notas. Se a média for maior ou igual a 6, então mostrar "Aprovado"; se for maior ou igual a 4 e menor que 6, mostrar "Exame"; se for menor que 4 mostrar "Reprovado".

#include <stdio.h>

int main(){

//Variáveis
	int num1, num2, num3, num4, plus, media;

//Receber as notas
	printf("Digite a primeira nota:\n");
	scanf("%d", &num1);

		printf("Digite a segunda nota:\n");
	scanf("%d", &num2);

		printf("Digite a terceira nota:\n");
	scanf("%d", &num3);

		printf("Digite a quarta nota:\n");
	scanf("%d", &num4);

//Faz a soma das notas
	plus = num1 + num2 + num3 + num4;

//calcula a méda
	media = plus/4;

//condições
if (media == 6){
	printf("Aprovado\n");
	}
if (media >= 4 && media < 6){
	printf(" Exame\n");
	}
if (media < 4){
	printf("Reprovado\n");
	}

}

#Exercício 02

//Faça um algoritmo para calcular o novo salário de um funcionário. Sabe-se que os funcionários que possuem salário até 500,00 terão aumento de 20%, os demais terão aumento de 10%

#include <stdio.h>
#include <stdlib.h>

int main(){
//Variáveis
	char nome[100];
	float s, ns, per;

//Recebe os valores
	printf("Digite o nome do funcionário:\n");
	gets(nome);

	printf("Digite o salário atual de %s:", nome);
	scanf("%f",&s);

//Condições

if (s <= 500.00){
	per = 20.0 / 100.0;//Cálculo da porcentagem
	ns = s + (per * s);//Cálculo do novo salário
		printf("O novo salário de %s é de %f:\n", nome, ns);//Resultado
	}
	else
		per = 10.0 / 100.0;//Cálculo da porcentagem
		ns = s + (per * s);//Cálculo do novo salário
			printf("O novo salário de %s é de %f:\n", nome, ns);//Resultado

}

#Exercício 03

//Faça um algoritmo que calcule a temperatura em Fahrenheit e apresente-a covertida em graus celsius. Nota:°C = (°F - 32) / 1.8

#include <stdio.h>
#include <stdlib.h>

int main(){

//Variaveis
	float F, C;

//Receber o valor
	printf("Digite o valor de Fahrenheit:\n");
	scanf("%f", &F);

//Conversão
	C = (F - 32) / 1.8;

//Resultado
	printf("o valor de %f° Fahrenheit covertido para Celsius é de: %f°\n", F, C);

}

#Exercício 04

//Faça um programa que receba um número inteiro positivo e maior que zero, calcule e mostre: a) o número digitado ao quadrado; b)O número digitado ao cubo.

#include <stdio.h>
#include <stdlib.h>

int main(){

int n, q, c;

//Receber o valor
	printf("Insira um número inteiro positivo e maior que zero: ");
	scanf("%d", &n);

//Cálculos
	q = n * n;
	printf("%d ao quadrado é: %d\n", n, q);//Resultado

	c = n * n * n;
	printf("%d ao cubo é: %d\n",n, c);//Resultado


}

#Exercício 05

//Faça um programa que receba o ano de nascimeto de uma pessoa e o ano atual. Calcule e mostre: a) A idade da pessoa; b) Quantos anos essa pessoa terá em 2050.

#include <stdio.h>

int main(){

//Variáveis
	int nascimento, atual, idade, futuro, velho;

//Valor fixo
	futuro = 2050;

//Receber os dados
	printf("Digite o seu ano de nascimento:\n");
	scanf("%d", &nascimento);

	printf("Digite o ano atual:\n");
	scanf("%d", &atual);

//Cálculos
	idade = atual - nascimento;
	velho = futuro - nascimento;

//Resultado
	printf("Você nasceu em %d, atualmente, no ano %d, voce tem %d, mas em 2050, você terá %d\n", nascimento, atual, idade, velho);

}

#Exercício 06

//Faça um programa que receba um número real, calcule e mostre sua parte fracionária, sua parte inteira e o arredondamento desse número.

#include <stdio.h>
#include <stdlib.h>

int main(){

//variáveis
	float real;
//Recebe o número
	printf("Digite um número real:\n");
	scanf("%f", &real);
//Faz o cálculo e entrega o resultado
	printf("A parte inteira deste número é: %d\n", (int)real);
	printf("A parte fracionária deste número é: %.2f\n",real-(int)real);
	printf("O arredondamento deste número é: %0f.\n", real);

}

#Exercício 07

//Faça um programa que receba dois números e mostre o maior
#include <stdio.h>

int main(){

//Variáveis
	int n1, n2;

//Receber os números
	printf("Digite dois números:\n");
	scanf("%d %d", &n1, &n2);

//Condições
	if (n1 > n2){
		printf("%d\n", n1);//Resultado

	}
	else
		printf("%d\n", n2);//Resultado

}

#Exercício 08

//Faça um programa  que receba três números e os exiba em ordem crescente.

#include <stdio.h>

int main(){

//variáveis
	int n1, n2, n3;

//Recebe os dados
	printf("Digite 3 números:\n");
	scanf("%d %d %d", &n1, &n2, &n3);

//Condições
	if (n1 > n3) {
		int tmp = n3;
		n3 = n1;
		n1 = tmp;
	}
	if (n1 > n2){
		int tmp = n2;
		n2 = n1;
		n1 = tmp;
	}
	if (n2 > n3){
		int tmp = n3;
		n3 = n2;
		n2 = tmp;
	}

//Resultado
	printf("%d %d %d", n1, n2, n3);
}

# Exercício 09

//Faça um programa que receba um número inteiro e verifique se esse número é par ou impar.

#include <stdio.h>

int main(){

//Variáveis
	int num;

//Recebe o número
	printf("Digite um número: ");
	scanf("%i", &num);

//Condições
	if(num % 2 == 0){
	printf("\nNúmero Par\n\n");//Resultado
	}
	else{
		printf("\nNúmero Ímpar\n\n");//Resultado

	}
}

