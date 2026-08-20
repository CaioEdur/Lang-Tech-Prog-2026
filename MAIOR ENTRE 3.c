#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("\n=============10==============\n");
	
	int a, b, c, maior_temp, maior;
	
	printf("\nInsira os valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	
	maior_temp=((a + b)+abs(a - b))/2;
	maior = ((maior_temp+c)+abs(maior_temp-c))/2;
	
	printf("\nO maior numero entre %d %d e %d e o %d ", a, b, c, maior);
	

	
	
	return 0;
}
