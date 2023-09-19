#include <stdio.h>

void main(void)
{
	float base, altura, area;
	printf("Base: ");
	scanf_s("%f", &base);
	printf("Altura: ");
	scanf_s("%f", &altura);
	area = base * altura;
	printf("El area de el rectangulo es: %10.2f", area);
}