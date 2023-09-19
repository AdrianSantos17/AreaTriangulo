#include <stdio.h>

void main(void)
{
	float base, altura, area;
	printf("Base: ");
	scanf_s("%f", &base);
	printf("Altura: ");
	scanf_s("%f", &altura);
	area = (base * altura) / 2.0;
	printf("El area de el triangulo es: %10.2f", area);
}