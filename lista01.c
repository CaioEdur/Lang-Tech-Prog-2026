#include <stdio.h>
#include <stdlib.h>
#include <MATH.H>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, AUX;
	
	printf("=================EXERCICIO 1=================\n");
	
	printf("\nInsira um numero: ");
	scanf("%d", &primeiro);
	
	printf("\nInsira o segundo numero: ");
	scanf("%d", &segundo);
	
	AUX = primeiro;
	primeiro = segundo; 
	segundo = AUX;
	
	printf("A ordem inversa deles sao %d e %d", primeiro, segundo);
	
	printf("\n=============================================\n");
	
		
	printf("=================EXERCICIO 2=================\n");
	
	double valor, base;
	int expoente;

	printf("\nInsira um valor positivo com até 6 casas decimais: ");
	scanf("%lf", &valor);//limitado a 6 casa decimais.

	base = valor;
	expoente = 0;

	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	if (valor >= 10) {
		valor /= 10;
		expoente++;
	}
	
	printf("\nEm notacao cientifica: %f x 10^%d\n", base, expoente);

	
	printf("\n=============================================\n");
	
	
	printf("=================EXERCICIO 3=================\n");

	int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;

	printf("Insira o valor para a conversao: ");
	scanf("%d", &n);

	bit_64 = n % 2;
	res = n / 2;

	bit_32 = res % 2;
	res = res / 2;

	bit_16 = res % 2;
	res = res / 2;

	bit_8 = res % 2;
	res = res / 2;

	bit_4 = res % 2;
	res = res / 2;

	bit_2 = res % 2;
	res = res / 2;

	printf("\nO valor dele em binario e %d%d%d%d%d%d%d\n", res % 2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
		
	printf("\n=============================================\n");
	printf("=================EXERCICIO 4=================\n");

	float fixo, venda, vendas, comissao, lucro, c;

	fixo = 1000;
	comissao = 0.15;
	vendas = 200 * comissao; //ATRIBUIDO CADA VENDO COMO 200 REAIS.

	printf("\nInsira a quantidade de vendas: ");
	scanf("%f", &venda);

	c = (vendas * venda);
	lucro = fixo + c;

	printf("\nO valor no final do mes sera de: %.2f", lucro);
	

	printf("\n=============================================\n");
	printf("=================EXERCICIO 5=================\n");

	int m, s, p, valor1, valor2, valor3, valor4, v1, v2, v3, v4, i;

	
	printf("\nInforme um valor de 1 ate 6: ");
	scanf("%d", &valor1);

	printf("\nInforme outro valor : ");
	scanf("%d", &valor2);

	printf("\nInforme outro valor : ");
	scanf("%d", &valor3);

	printf("\nInforme outro valor : ");
	scanf("%d", &valor4);

	s = valor1 + valor2 + valor3 + valor4;
	m = s / 4;
	
	printf("\nA soma dos valores é: %d", s);
	printf("\nA media dos valores é: %d", m);
	
	printf("=================EXERCICIO 6=================\n");
	
	int idade, anos, meses, dias;
	
	printf("\nInforme a sua idade em dias: ");
	scanf("%d", &idade);
	
	anos = idade / 360;
	meses = (idade % 360) / 12;
	dias = idade % 30;
	
	printf("\nVoce tem %d anos, %d meses e %d dias de vida", anos, meses, dias);
	
	printf("\n=============================================\n");	
	
	printf("=================EXERCICIO 7=================\n");
	
	float r, volume, pi=3.14159;
	
	printf("\nInforme o raio para o calculo: ");
	scanf("%f", &r);
	
	volume = (4/3.0) * pi * (r*r*r);
	
	printf("\nO volume e de %f", volume);
	
	printf("\n=============================================\n");
	
	printf("\n=============================================\n");
	printf("=================EXERCICIO 8=================\n");
	
	int x1, x2, y1, y2, p1, p2;
	float dis; 
	
	printf("\nInsira o valor do par ordenado p1(x1,y1)");
	scanf("%d", &x1);
	scanf("%d", &y1);
	
	printf("\nInsira o valor do par ordenado p1(x2,y2)");
	scanf("%d", &x2);
	scanf("%d", &y2);
	
	p1 = pow(x2-x1,2);
	p2 = pow(y2-y1,2);
	
	dis = sqrt(p1+p2);
	
	printf("\nA distancia é de %f", dis); 
	
	
	printf("\n=============================================\n");
	
	return 0;
}
