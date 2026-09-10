#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, soma, soma2;
	
	printf("Informe o cpf: ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &c10, &c11);
	
    c1 = c1*10;
	c1 = c2*9;
	c1 = c3*8;
	c1 = c4*7;
	c1 = c5*6;
	c1 = c6*5; 
	c1 = c7*4;
	c1 = c8*3;
	c1 = c9*2;
	
	soma = c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9;
	
	soma = soma*10;
	soma = soma%11;
	
	c1 = (c1/10)*11;
	c2 = (c2/9)*10;
	c3 = (c3/8)*9;
	c4 = (c4/7)*8;
	c5 = (c5/6)*7;
	c6 = (c6/5)*6; 
	c7 = (c7/4)*5;
	c8 = (c8/3)*4;
	c9 = (c9/2)*3;
	c10 = c10*2;
	
	soma2 = c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10;
	soma2 = soma2*10;
	soma2 = soma2%11;
	
	if (soma == c10 && soma2 == c11)
		printf("o cpf e valido");
	else
		printf("o cpf e invalido");
	
	
	return 0;
}
