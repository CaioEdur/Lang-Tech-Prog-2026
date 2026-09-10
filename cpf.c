#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, soma, soma2, valido1, valido2;
	
	printf("Informe o cpf: ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &c10, &c11);
	
	valido1 = c10;
	valido2 = c11;
	
    c1 = c1*10;
	c2 = c2*9;
	c3 = c3*8;
	c4 = c4*7;
	c5 = c5*6;
	c6 = c6*5; 
	c7 = c7*4;
	c8 = c8*3;
	c9 = c9*2;
	
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
	
	if(soma2%11 == 10){
		soma2 = 0;
	}
	if(soma == valido1 && soma2 == valido2)
		printf("O cpf e valido");
	else
		printf("O cpf nao e valido");
		
	return 0;
}
