#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ex5 (){
	int valor, final, cem, cinquenta, dez, cinco, dois, um ;
	//Notas: R$ 100, R$ 50, R$ 10, R$ 5, R$ 2 e R$ 1
	printf("informe o valor: ");
	scanf("%d", &valor);
	
	cem = valor / 100;
	cinquenta = (valor - (cem *100)) / 50;
	dez = ((valor - (cem *100)) % 50) /10;
	cinco = (((valor - (cem *100)) % 50) % 10) / 5;
	dois = ((((valor - (cem *100)) % 50) % 10) % 5) / 2;
	um = (((((valor - (cem *100)) % 50) % 10) % 5) % 2) / 1;
	
	printf("\nNOTAS DE 100: %d notas", cem);
	printf("\nNOTAS DE 50:  %d notas", cinquenta);
	printf("\nNOTAS DE 10:  %d notas", dez);
	printf("\nNOTAS DE 5:   %d notas", cinco);
	printf("\nNOTAS DE 2:   %d notas", dois);
	printf("\nNOTAS DE 1:   %d notas", um);
}
void ex6 (){
	
}
int main(int argc, char *argv[]) {
	
	printf("=====================================================\n");
	printf("|                     LISTA 03                      |\n");
	printf("=====================================================");
	
	printf("\nEXERCICIO 5\n");
	printf("EXERCICIO 6\n");
	printf("MAIS EM BREVE");
	
	int op;
	printf("\nEscolha qual quer visualizar: ");
	scanf("%d", &op);
	
	switch (op){
		case 5: {
			ex5 ();
			break;
		}
	}
	return 0;
}
