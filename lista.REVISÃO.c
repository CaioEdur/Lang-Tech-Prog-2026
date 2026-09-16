#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	---------------------------------------------------------------------------------------------------------------------
	printf("VALIDAÇÃO DE CPF");
	
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
	
	---------------------------------------------------------------------------------------------------------------------
	printf("\nTRANFORMACAO DE C PARA F, F PARA C");

	float C, F;
	int qual;
	
	printf("1 - celcius\n");
	printf("2 - Fahrenheit");
	printf("\natualmente está em qual medida :");
	scanf("%d", &qual);
	
	switch (qual){
		case 1: {
				printf("\nIndique a temperatura em celsius: ");
				scanf("%f", &C);
			
				F = C * (9.0/5.0) + 32.0;

				printf("\nA temperatura para Fahrenheit e de: %2.1f", F);
		break;
		}
		case 2: {
				printf("\nIndique a temperatura em Fahrenheit: ");
				scanf("%f", &F);
			
				C = (F - 32) * 5/9;

				printf("\nA temperatura para Celcius e de: %2.1f", C);
		break;
		}
	}
	
	---------------------------------------------------------------------------------------------------------------------
	printf("MEDIA DE NOTAS");
	
	int media, nota1, nota2, nota3;
	
	printf("Informe a primeira nota: ");
	scanf("%d", &nota1);
	if (nota1 > 100)
		nota1 = 100;
	else if (nota1 < 0)
		nota2 = 0;
	
	printf("Informe a segunda nota: ");
	scanf("%d", &nota2);
	if (nota2 > 100)
		nota2 = 100;
	else if (nota2 < 0)
		nota2 = 0;
	
	printf("Informe a terceira nota: ");
	scanf("%d", &nota3);
	if (nota3 > 100)
		nota3 = 100;
	else if (nota3 < 0)
		nota3 = 0;
	
	media = (nota1 + nota2 + nota3) / 3;
	
	if (media >= 70 && media <= 100)
		printf("\nAPROVADO com %d de media", media);
	else if (media <= 69 && media >= 40)
		printf("\nEXAME com %d de media", media);
	else if (media < 40)
		printf("\nReprovado com %d de media", media);
	
	return 0;
}
