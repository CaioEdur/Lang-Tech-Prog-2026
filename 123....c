#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("VALOR INVERSO E QUADRADO\n");
	
	int numero, inverso, quadrado;
	
	printf("\nInforme o valor para a inversao: ");
	scanf("%d", &numero );
	
	if (numero > 0){
		inverso = numero * -1;
		printf("\nO valor e %d", inverso);
	}
	else{
		quadrado = numero * numero;
		printf("\nO valor e %d", quadrado);
    }
   	
	
	/*
	printf("\nMAIOR ENTRE 3");
	
	int a, b, c;
	int resultado;
	
	printf("\nInsira os valores de A B e C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b)
		resultado = a;
	else
		resultado = b;
		
	if (c>resultado)
		resultado = c;
	
		
	printf("%d e o maior", resultado);
	*/	
	return 0;
}
