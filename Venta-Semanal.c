
// programa para las ventas semanales

#include <stdio.h> //ejecuta el complilador

int main()
{
    float Primerasemana = 15924;
    float Segundasemana = 12783;
    float Tercerasemana = 10456;
    float Cuartasemana = 7864;
    float prom;

    prom = (Primerasemana + Segundasemana + Tercerasemana + Cuartasemana) / 4;

    printf("El promedio de venta es: %.1f", prom);
    return 0;
}
