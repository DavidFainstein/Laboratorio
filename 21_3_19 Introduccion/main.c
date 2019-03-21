#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int edad;
    edad= 66;
    float altura;
    altura= 82.5;
    printf("Su edad es: %d\nSu altura es: %.2f",edad, altura);


    printf("\nIngrese edad: ");
    scanf("%d",&edad);
    printf("\nIngrese altura: ");
    scanf("%f",&altura);

    printf("Su edad es: %d\nSu altura es: %.2f",edad, altura);


*/
    int edad;
    float altura;
    int contador;
    int numero;
    int suma;
    float promedio;
    altura=82.5;
    edad=66;

    printf("\n ingrese su altura :");
    scanf("%f", &altura);
    printf("\n ingrese su edad :");
    scanf("%d", &edad);

    contador=0;
    suma=0;

    while(contador<5)
        {
            //5 4 4 4 4
            printf("\n ingrese un numero:");
            scanf("%d", &numero);

            suma=suma+numero;
            contador++;
        }
        promedio= (float)suma/contador; //aca el float funciona como funcion, transformando la operacion en con coma
        printf(" el promedio es :%.2f",promedio); // el .2 me sirve para reducir los 00 pos coma, 4,2000 = 4,20











    return 0;

}
