#include <stdio.h>
#include <stdlib.h>
float VOLUMEN(float log, float ancho, float profun);

float CAPACIDAD(float volum);

void TIEMPO(float capacidad);

int main()
{
    float log = 0, ancho = 0, profun = 0, volum = 0, capa = 0, c = 0;
    printf("Ingrese la logitud, ancho y profundidad (en pies) de la piscina\n");
    scanf("%f""%f""%f", &log, &ancho, &profun);
    system("cls");
    volum =VOLUMEN( log, ancho, profun);
    printf("El volumen es %.2f\n", volum);
    capa = CAPACIDAD(volum);
    printf("La capacidad es %.2f\n", capa);
    TIEMPO(capa);
    system("pause");
    return 0;
}
float VOLUMEN(float log, float ancho, float profun )
{
    return log*ancho*profun;
}
float CAPACIDAD(float volum)
{
    return (volum*7.8);
}
void TIEMPO(float capa)
{
    float tiempo = 0;
    tiempo = capa / 20 / 60;
    printf("El tiempo es %.2f\n", tiempo);
}
