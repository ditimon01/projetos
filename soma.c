#include <stdio.h>
#include <locale.h>

int num1, num2;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite os n�meros a serem somados\n");
	printf("n�mero 1: ");
	scanf("%i",&num1);
	printf("n�mero 2: ");
	scanf("%i",&num2);
	
	printf("\n%i + %i = %i\n", num1, num2, num1+num2);
	
	return 0;
}