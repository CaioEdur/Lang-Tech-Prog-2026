#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("=======================================\n");
	printf("|                 MENU                 |\n");
	printf("=======================================\n");
	
	printf("=========SELECAO DE EXERCICIO==========\n");
	
	printf("Exercicio 1 ");
	printf("\nExercicio 2 ");
	printf("\nExercicio 3 ");
	printf("\nExercicio 4 ");
	printf("\nExercicio 5 ");
	printf("\nExercicio 6 ");
	printf("\nExercicio 7 ");
	printf("\nExercicio 8 ");
	printf("\nExercicio 9 ");
	printf("\nExercicio 10 ");
	
	int op;
	
	printf("\nEscolha um exercício para visualizar ou realizar: ");
	scanf("%d", &op);
	
	switch (op) {
			
		case 1:{
			
			printf("\n=============1==============\n");
			
			int atual=2026, idade, nasc;
			
			printf("\nQual a sua idade ?: ");
			scanf("%d", &idade);
			
			nasc = atual - idade;
			
			printf("\nVoce nasceu em %d", nasc);
			
			printf("\n============================\n");	
			
			break;
		}
		
		case 2:{
			
			printf("\n=============2==============\n");
				
			float km, ms;
				
			printf("\nDiga a sua distancia percorrida em Km/h para a convercao: ");			
			scanf("%f", &km);
				
			ms = km/36;
				
			printf("\nO valor em metros percorridoe de %.6f metros", ms);
				
			printf("\n============================\n");
			
			break;
		}
		case 3:{
			
			printf("\n=============3==============\n");
				
			float r, d, dolar;
				
			printf("\nInsira o valor em real para a converçao: ");
			scanf("%f", &r);
				
			d = 5.19;
			dolar = r / d;
				
				
			printf("\nO valor em dolar e de %f", dolar);
				
			printf("\n============================\n");
						 
			break;
		}	
		case 4:{
			
			printf("\n=============4==============\n");
			
			float C, F;
			
			printf("\nIndique a temperatura em celsius: ");
			scanf("%f", &C);
			
			F = C * (9.0/5.0) + 32.0;
			
			printf("\nA temperatura para Fahrenheit e de: %2.1f", F);
			
			printf("\n============================\n");
			
			break;
		}
		case 5:{
			
			printf("\n=============5==============");
			
			float Raio, G, pi = 3.141592;
			
			printf("\nQual o grau do angulo para a conversao em radiano: ");
			scanf("%f", &G);
			
			Raio = G * pi/180;
			
			printf("\nO valor em radianos e de %f", Raio); 
			
			printf("\n============================\n");
			
			break;
		}
		case 6:{
			
			printf("\n=============6==============");
			
			int nu, sucessor, antecessor;
			
			printf("\nInsira um valor para deescobrir seu sucessor e antecessor: ");
			scanf("%d", &nu);
			
			sucessor = nu + 1;
			antecessor = nu - 1;
			
			printf("\nO sucessor do %d e o %d e o antecessor dele e o %d", nu, sucessor, antecessor);
			
			printf("\n============================\n");
			
			break;
		}
		case 7:{
			
			printf("\n=============7==============");
			
			float R=780000, primeiro, segundo, terceiro;
			
			primeiro = R * 46/100;
			segundo = R * 32/100;
			terceiro = R - (primeiro + segundo);
			
			printf("\nO primeiro lugar ira receber %.0f", primeiro);
			printf("\nO segundo lugar ira receber %.0f", segundo);
			printf("\nO terceito lugar ira receber %.0f", terceiro);
			
			printf("\n============================\n");
			
			break;
		}
		case 8:{
			
			printf("\n=============8==============");
			
			int n, s, h, m;
			
			printf("\nInforme a o tempo em segundos: ");
			scanf("%d", &n); 
			
			h = n / 3600;
			m = (n % 3600) / 60;
			s = n % 60;
			
			printf("\no horario e de %02d:%02d:%02d", h, m, s);
			
			printf("\n============================\n");
			
			break;
		}
		case 9:{
			
			printf("\n=============9==============");
			
		 	int vm, horas, percorrida;
		 	float litros_gastos;
		 	
		 	printf("\nInforme a velocidade media: ");
		 	scanf("%d", &vm);
		 	
		 	printf("\nInforme o tempo da viagem em horas: ");
		 	scanf("%d",&horas);
		 	
		 	percorrida = horas * vm;
		 	litros_gastos = percorrida /12;
		 	
		 	printf("\nA distancia percorrida e de %dkm e serao necessarios %.3f litros para completrar a viagem", percorrida, litros_gastos);
			
			printf("\n============================\n");
			
			break;
		}
		case 10:{
			
			printf("\n=============10==============\n");
			
			int a, b, c, maior_temp, maior;
			
			printf("\nInsira os valores a serem comparados: ");
			scanf("%d %d %d", &a, &b, &c);
			
			maior_temp=((a + b)+abs(a - b))/2;
			maior = ((maior_temp+c)+abs(maior_temp-c))/2;
			
			printf("\nO maior numero entre %d %d e %d e o %d ", a, b, c, maior);
			
			printf("\n============================\n");
			
			break;
		}
	}
		
	return 0;
}
