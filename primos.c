#include <stdio.h>
#include <stdlib.h>

/* crie um programa que leia um numero, entre 0 e 9 ,
   verifique se ele é um numero primo, caso seja, imprima seu dobro, caso não seja primo
   verifique se é par ou impar. se for par mostre o resultado de soma 2. se for impar
   mostre seu anterior e seu proximo... 
   caso não esteja entre 0 e 9 mostre _out_of_range. */

int main(int argc, char *argv[]) {
	/*
	int n;
	
	printf("\nEntre com o numero: ");
	scanf("%d", &n); 
	
	if (n<10 && n>0)		
									 //equivalente (n>=1 && n<=9)
		if (n==1 || n==2 || n==3 || n==3 || n==5 || n==7)
			printf("\nO dobro do numero %d e %d", n, (n*2));
		else if (n%2 == 0)
			printf("%d+2 = %d", n, n+2);
		else
			printf("|%d|%d|%d|", n-1, n, n+1);	
			
	else printf("_out_of_range");
	*/
	
	
	char op;
	scanf("%c", &op); 
	switch(op){
	case 'a': printf("opa ta falando com ele"); break;
	
	case 'b': printf("benedito"); break;
	
	case 'c': printf("é complicado a situação"); break;
	
	case 'd': printf("tamo junto"); break;
	}
	
	
	
	return 0;
}
