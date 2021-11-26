Atividade 03

#Exercício 01

//Faça um progrma que receba o salário base de um funcionário, e que calcule o salário a receber, sabendo-se que o funcionário paga imposto de 7% sobre este salário

#include <stdio.h>
#include <stdlib.h>

int main(){

//Variáveis
	float base, imposto, salario;

//Receber Salário Base
	printf("Por favor, insira o salário base:\n");
	scanf("%f", &base);

//Desconto do salário
imposto = 7.0 / 100.0;

//Cálculo do salário final
salario = base * imposto;

//Entrega do resultado
printf("O salário a ser entregue é de R$%0.2f \n", salario);

}

Exercício 02

//Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.

#include <stdio.h>

int main(){
//Variáveis
	 int ano, mes, dia, total_dias;

//Receber valores

	printf("por favor, insira a quantidade de anos:\n");
	scanf("%d", &ano);

	printf("Por favor, insira a quantidade de meses:\n");
	scanf("%d", &mes);

	printf("Por favor, insira a quantidade de dias:\n");
	scanf("%d", &dia);

//Conversões

total_dias = (ano*365) + (mes * 30) + dia;

printf("%d dias\n", total_dias);

}

Exercício 03

//Faça um programa que receba a altura e o sexo de uma pessoa e que calcule seu peso ideal, utilizando as seguintes fórmulas.
//para homens: (72.7 * h) – 58;
//Para mulheres: (62.1 * h) – 44.7.

#include <stdio.h>

int main(){

//Variáveis
	char sex;

	float altura, peso_ideal;

	printf("Por favor, diga se você é homem ou mulher(h ou m):\n");
	scanf("%s", &sex);

	printf("Por favor, diga a sua altura(adicione ponto flutuante):\n");
	scanf("%f", &altura);

		if (sex == 'h'){
		peso_ideal = (72.7 * altura) - 58.0;
		printf("Olá amigo, o seu peso ideal é: %0.2f\n", peso_ideal);
	}
	else{
		peso_ideal = (62.1 * altura) -44.7;
		printf("Olá amiga, o seu peso ideal é: %0.2f\n", peso_ideal);
	}
}

#Exercício 04

//Faça um programa que receba o tempo de duração de um evento expresso em segundos e mostre-o expresso em horas, minutos e segundos.

#include <stdio.h>
#include <cstdio>

int main(){

//Variáveis

	float total_seg, horas, min, seg;

//Receber valores
	printf("Insira a quantidade de segundos:\n");
	scanf("%f", &total_seg);

//Cálculos

	horas = total_seg / 3600;

	min = horas / 60;

	seg = min / 60;

//Resultado

	printf("%0.1f horas %0.1f minutos %0.1f segundos", horas, min, seg);
}

//Verificar

#Exercício 05

//Faça um programa que realize a conversão de dólar (US$) para real (R$). Deve ser fornecido o valor da cotação em dólar e também a quantidade de dólares disponíveis com o usuário.
#include <stdio.h>

int main(void){

//Variáveis
	float dolar, real, cota;

//Receber valor
	printf("Por favor, queira insirar a quantidade em dólar a ser convertida:\n");
	scanf("%f", &dolar);

//Cálculo

cota = 5.60;//valor fixo

real = dolar * cota;

//Resultado
	printf("Cota atual do dólar: U$%0.2f \n", cota);

	printf("Quantidade de dólar disponível: US$%0.2f\n", dolar);

	printf("Valor total convertido: R$%0.2f\n", real);





}

#Exercício 06

//Faça um programa que calcule o valor do total a ser pago pelo cliente, considerando o valor gasto (refeição, bebidas e sobremesas) mais os 10% adicionais do garçom sobre o valor total. O programa deve informar o valor total a ser pago pelo cliente.
#include<stdio.h>

int main(){

//Varáveis
	float valor, valor_total, refeicao, bebida, sobremesa, gorjeta;

	printf("\nPor favor, insira o valor da refeição(adicione o ponto flutuante):\n ");
	scanf("%f", &refeicao);
	printf("\nrefeição: R$%0.2f\n", refeicao);

	printf("\nPor favor, insira o valor da bebida:\n ");
	scanf("%f", &bebida);
	printf("\nbebida(s):R$%0.2f\n", bebida);

	printf("\nPor favor, insira o valor da sobremesa:\n ");
	scanf("%f", &sobremesa);
	printf("\nsobremesa: R$%0.2f\n", sobremesa);

//Cálculos
	valor = refeicao + bebida + sobremesa;
	printf("\nValor:R$%0.2f\n", valor);

	gorjeta = (valor * 10) / 100;

	valor_total = valor + gorjeta;

//Resultado
	printf("\nO Valor total a ser pago é de:R$%0.2f\n", valor_total);


}

#Exercício 07

//Faça um programa que receba um número inteiro maior que zero e verifique se ele é número primo ou não. Imprima mensagens informando ao usuário.
#include <stdio.h>

int main(){
//Variáveis
	int num, i, result = 0;

	printf("\nPor favor, insira um número inteiro maior que zero: ");
	scanf("%d", &num);

	for (i = 2; i <= num / 2; i++){
		if (num % i == 0) {
			result++;
			break;
		}
	}
	if (result == 0)
		printf("%d é primo\n", num);
	else
		printf("%d não é um número primo\n", num);

return 0;

}

#Exercício 08

//Faça um programa que leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela e calcule a multa que uma pessoa vai receber, sabendo que são pagos:
//a) 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h);
//b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida.
//sc) 200 reais, se estiver acima de 31km/h da velocidade permitida.
#include<stdio.h>

int main(){

//Variáveis
	int vel_motorista, vel_permitida;

//Receber valores
	printf("\nInsira a velocidade atingida pelo motorista: ");
	scanf("%d", &vel_motorista);

	printf("\nInsira a velocidade máxima permitida: ");
	scanf("%d", &vel_permitida);

//Condições

	if ( vel_motorista == vel_permitida +1 || vel_motorista == vel_permitida +2 || vel_motorista == vel_permitida +3 || vel_motorista == vel_permitida +4 
	|| vel_motorista ==vel_permitida +5 || vel_motorista == vel_permitida +6 || vel_motorista == vel_permitida +7 || vel_motorista == vel_permitida +8 
	|| vel_motorista == vel_permitida +9 || vel_motorista == vel_permitida +10) {

		printf("\nO motorista será multado em R$50.00\n\n");

				}
				else if (vel_motorista >= vel_permitida + 11 && vel_motorista <= vel_permitida + 30){
					printf("O motorista será multado em R$100,00 \n\n");

			}
			else if (vel_motorista >= vel_permitida + 31){
				printf("O motorista foi multado em R$200.00\n\n");

		}
		else if (vel_motorista <= vel_permitida){
			printf("Velocidade Ok\n\n");
		}

	return 0;

}

#Exercicio 09
//Faça um programa que leia um número inteiro de 1 a 7 e informe o dia da semana correspondente, sendo domingo o dia de número 1.
//Se o número não corresponder a um dia da semana, mostre uma mensagem de erro.

#include<stdio.h>

int main(){

//Variáveis

	int dom = 1, seg = 2, ter = 3, qua = 4, qui = 5, sex = 6, sab = 7, x;

//Receber o valor
	printf("\nPor favor, insira um número de 1 a 7: ");
	scanf("%d", &x);

//Condições
	if (x == dom){
		printf("\nEsse número é equivalente ao primeiro dia da semana, domingo.\n");
	}

	else if (x == seg){
		printf("\nEsse número é equivalente ao segundo dia da semana, segunda-feira.\n");
	}

	else if (x == ter){
		printf("\nEsse número é equivalente ao terceiro dia da semana, terça-feira.\n");
	}

	else if (x == qua){
		printf("\nEsse número é equivalente ao quarto dia da semana, quarta-feira.\n");
	}

	else if (x == qui){
		printf("\nEsse número é equivalente ao quinto dia da semana, quinta-feira.\n");
	}

	else if (x == sex){
		printf("\nEsse número é equivalente ao melhor dia da semana, sexta-feira \\(°o°)/\n");
	}

	else if (x == sab){
		printf("\nEsse número é equivalente ao último dia da semana, sábado.\n");
	}

	else{
		printf("\nincorreto, por favor, reinicie o programa e adicione um número de 1(um) a 7(sete).\n");
	}

}

#Exercicio 10

//Faça um programa que calcule os 20 primeiros números da sequência de Fibonacci. 0 1 1 2 3 5 8 13 21 34 ...

#include <stdio.h>

	int main(){

//Variáveis
	int a = 0, b = 1, auxiliar, i, n = 20;

//Mensagem no terminal e primeiro número
	printf("Série de Fibonacci:\n");
	printf("%d\n", b);

//Laço com Variável de Controle
	for(i = 0; i < n; i++){
//instruções
	auxiliar = a + b;

	a = b;

	b = auxiliar;

//Demais números
	printf("%d\n", auxiliar);

	}
}

#Exercicio 11

//Faça um programa que calcule o fatorial de um número.

#include <stdio.h>

int main(){

//Variáveis
	int CONTADOR, N;
	long FATORIAL = 1;

//Variáveis com valor fíxo
	CONTADOR = 1;

//Mensagem no terminal
	printf("\nPrograma Fatorial\n");

//Coleta de dados
	printf("\nPor favor, insira um número para calcular sua fatorial: "); 
	scanf("%d", &N);

//Looping do tipo While
	while (CONTADOR <= N){

	FATORIAL *= CONTADOR;
	CONTADOR ++;
	}
//Resultado
	printf("\nFatorial de %d equivale a %ld\n\n", N, FATORIAL);
	return 0;
}

#Exercicio 12

//Faça um programa que imprima os múltiplos positivos de 7 inferiores a 1000.

#include <stdio.h>

int main(){

	int z = 0, x = 7, i, n = 1000; 

	printf("\n\nEis os múltiplos de 7 inferiores a 1000.\n\n");

	while (z < n){
	i = x * z;
	z ++;
	printf("\n%d\n", i);
	}
	return 0;

}
