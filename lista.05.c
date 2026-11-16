#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("EX 1");

	printf("EX 2");
	float primeiroV, resultado;
	double numeroD;
	
	
	printf ("\n" "Digite o primeiro valor:  ");
	scanf ("%f", &primeiroV);

	
	numeroD = primeiroV + primeiroV;
	resultado = numeroD * pow(10, 4);
	
	printf ("%lf", resultado);
	
	
	
	printf("EX 5");
	int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	
	printf("\n""Insira o valor a ser convertido:   ");
	scanf ("%d", &n);
	
	bit_64 = n%2;
	res = n/2;
	
	bit_32 = res%2;
	res = res/2;
	
	bit_16 = res%2;
	res = res/2;
	
	bit_8 = res%2;
	res = res/2;
	
	bit_4 = res%2;
	res = res/2;
	
	bit_2 = res%2;
	res = res/2;
	
	printf ("O numero %d em binario = %d%d%d%d%d%d%d", n, res%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);

printf("EX 4");
int main [10];
int i,maior;

para (i=0;i<10;i++){
	scanf("%d",&vet[i]);
}
for(i=1, maior = vet[0]; i < 10; i++){
		maior = calcula_maior(maior,vet[i]);
}
	printf("%d e o maior", maior);
	
	return 0;
}
