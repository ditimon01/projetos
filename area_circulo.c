#include <stdio.h>

//Declara��o de vari�veis
const double pi = 3.14159;
double raio, area;

int main()
{
	//Leitura de dados
	printf("Insira o raio do circulo: ");
	scanf("%lf", &raio);
	
	//Execu��o do c�lculo
	area = raio*raio*pi;
	
	//Printando o resultado na tela
	printf("Area do circulo: %.4lf\n", area);
	
	return 0;
}