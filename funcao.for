#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int comp_maior (int a, int b){
	if(a>b) return a;
	else return b;
}

int main(int argc, char *argv[]) {
	int valor[10];
	int i;
	
	//i=indice;
	
	printf("Leia os numeros");
	//para um valor inicial, uma condição,incremento faça:  ; i++ --->adicionar, i-- --->para tras; condição ---> quantas casas
	for (i=0; i<10; i++){
		scanf("%d", &valor[i]);
	}
	for (i=9; i>0 ; i--){
		printf("|%d|",valor[i]);
	}
	
	return 0;
}
