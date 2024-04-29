#include <stdio.h>
#include <locale.h>

int num1, num2;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite os números a serem somados\n");
	printf("número 1: ");
	scanf("%i",&num1);
	printf("número 2: ");
	scanf("%i",&num2);
	
	printf("\n%i + %i = %i\n", num1, num2, num1+num2);
	
	return 0;
}