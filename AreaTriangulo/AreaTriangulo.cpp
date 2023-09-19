#include <stdio.h>

void main(void)
{
	float radio, area;
	printf("Radio: ");
	scanf_s("%f", &radio);
	area = (radio * radio) * 3.1416;
	printf("El area de el circulo es: %10.2f", area);
}