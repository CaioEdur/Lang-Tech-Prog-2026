#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("\n=============8==============");
	
	int n, s, h, m;
	
	printf("\nInforme a o tempo em segundos: ");
	scanf("%d", &n); 
	
	h = n / 3600;
	m = (n % 3600) / 60;
	s = n % 60;
	
	printf("\no horario e de %02d:%02d:%02d", h, m, s);
	
	printf("\n============================\n");
	/*
	printf("\n=============7==============");
	
	float R=780000, p, s, t;
	
	p = R * 46/100;
	s = R * 32/100;
	t = R - (p + s);
	
	printf("\nO primeiro lugar ira receber %.0f", p);
	printf("\nO segundo lugar ira receber %.0f", s);
	printf("\nO terceito lugar ira receber %.0f", t);
	
	printf("\n============================\n");
	
	
	printf("\n=============6==============");
	
	int n, s, a;
	
	printf("\nInsira um valor para deescobrir seu sucessor e antecessor: ");
	scanf("%d", &n);
	
	s = n + 1;
	a = n - 1;
	
	printf("\nO sucessor do %d e o %d e o antecessor dele e o %d", n, s, a);
	printf("\n============================\n");
	
	printf("\n=============5==============");
	
	float R, G, p = 3.141592;
	
	printf("\nQual o grau do angulo para a conversao em radiano: ");
	scanf("%f", &G);
	
	R = G * p/180;
	
	printf("\nO valor em radianos e de %f", R); 
	
	printf("\n============================\n");
	
	printf("\n=============4==============\n");
	
	float C, F;
	
	printf("\nIndique a temperatura em celsius: ");
	scanf("%f", &C);
	
	F = C * (9.0/5.0) + 32.0;
	
	printf("\nA temperatura para Fahrenheit e de: %2.1f", F);
	
	printf("\n============================\n");
	
	printf("\n=============2==============\n");
	
	float km, ms;
	
	printf("\nDiga a sua distancia percorrida em Km/h para a convercao: ");
	scanf("%f", &km);
	
	ms = km/36;
	
	printf("\nO valor em metros percorridoe de %.6f metros", ms);
	
	printf("\n============================\n");
	
	printf("\n=============1==============\n");
	
	int atual=2026, idade, nasc;
	
	printf("\nQual a sua idade ?: ");
	scanf("%d", &idade);
	
	nasc = atual - idade;
	
	printf("\nVoce nasceu em %d", nasc);
	
	printf("\n============================\n");
	
	printf("\n=============3==============\n");
	
	float r, d, dolar;
	
	printf("\nInsira o valor em real para a converçao: ");
	scanf("%f", &r);
	
	d = 5.19;
	dolar = r / d;
	
	
	printf("\nO valor em dolar e de %f", dolar);
	
	printf("\n============================\n");
	
	printf("\n=============10==============\n");
	
	int a, b, c, maior_temp, maior;
	
	printf("\nInsira os valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	
	maior_temp=((a + b)+abs(a - b))/2;
	maior = ((maior_temp+c)+abs(maior_temp-c))/2;
	
	printf("\nO maior numero entre %d %d e %d e o %d ", a, b, c, maior);
	
	printf("\n============================\n");
	*/

	return 0;
}
