####### Atividade01-de-Algoritmo

# Exercício 05

//Faça um programa que receba dois números, efetue a soma e mostre o resultado na tela.

#include <stdio.h>

int main(){
//Variáveis     
    int num1, num2, plus;
    
//Recebe os valores 
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
//faz a soma dos valores
    plus = num1 + num2;

//entrega o resultado
    printf("%.2d + %.2d = %.2d\n", num1, num2, plus);

}


# Exercício06

//Faça um programa que calcule a área de um triângulo retângulo, dados os valores de sua base e altura.

#include <stdio.h>

int main()
{
//Variáveis
    int b, h, A;
    
//Entrada de Dados    
    printf("\nInforme o valor da base: ");
    scanf("%d", &b);
    
    printf("\nInforme o valor da altura: ");
    scanf("%d", &h);

//Fórmula
    A = (b * h) / 2;

//Entrega do Resultado
    printf("A área do triângulo é: %d\n", A);
}

# Exercício 07

//Faça um programa que receba nome, endereço e número de telefone e mostre as informações na tela.

#include <stdio.h>

int main (){
//Coleta de Dados
    char nome[100], endereco[100], tele[100];
    
    printf("Por favor, insira seu nome: ");
    gets(nome); 
    
    printf("Agora, o endereço: ");
    gets(endereco);
	
    printf("Agora, seu número de telefone: ");
    gets(tele);

//Entrega de Dados
    printf("%s \n", nome);
    printf("%s \n", endereco);
    printf("%s \n", tele);


}

# Exercíco 08

/faça um programa que calcule a média aritimética entre três valores informados. Mostre a média na tela.

#include <stdio.h>

int main(){

//Variáveis
	int num1, num2, num3, plus, media;

//Recebe os valores	
	printf("Digite o primeiro número:\n");
	scanf("%d", &num1);
	
	printf("Digite o segundo número:\n");
	scanf("%d", &num2);
	
	printf("Digite o terceiro número:\n");
	scanf("%d", &num3);

//Faz a soma dos valores	
	plus = num1 + num2 + num3;

//Calcula a média	
	media = plus / 3;

//Entrega o resultado	
	printf("a média é: %d ", media);

}

# Exercíco 09

//Faça um programa que receba o raio de um circulo, calcule e mostre sua área.(Área = π * R²)

#include <stdio.h>

int main(){

//Variáveis
	float A, r, pi = 3.14;

//Coleta de Dados	
	printf("Insira o valor do raio: ");
	scanf("%f", &r);

//Aplicação da fórmula	
	A = pi * (r * r);

//Entrega do resultado	
	printf("A área é: %f\n", A);

}






