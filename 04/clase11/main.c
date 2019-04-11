#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD_ALUMNOS 4

/*arrays paralelos.(borrar y sobreescribir en la memoria ram)
nombre={ , , } esto es un atributo de un elemento. estos son carac del elemento del que hablamos.
apellido={ , ,} dato, cadena de caracteres
edad={ , ,} dato, cadena de enteros
Estos son datos del Alumno (para poder tener datos cargados y empezar a testear)
*/

void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);
/*int esSoloLetras(char palabra[])
{
    while( )
    for (i=0)
}
if(palabra[i]!='')//con comillas simples.
    {
        if(palabra[i]<'a'&& palabra[i]>'z')
        {
            if(palabra[i]<'A' && palabra[i]>'Z')
            {
                Return 0;
            }
        }
    }*/
int main()
{
    char nombre[CANTIDAD_ALUMNOS][50] = {"Bautista","Alma","Antonella","Santiago"};
    char apellido[CANTIDAD_ALUMNOS][50] = {"Diaz","Gonzales","Fernandez","Felix"};
    int edad[CANTIDAD_ALUMNOS]={10,15,18,22};
    int nota[CANTIDAD_ALUMNOS]={3,7,5,9};
    int i;

        for(i=0;i <CANTIDAD_ALUMNOS; i++)
        {
            printf("nombre y apellido:%s %s\t",nombre[i],apellido[i]); // barra /t, para tabular.
            printf("\tedad:%d\t",edad[i]);
            printf("\tnota:%d\n",nota[i]);

        }

    /*char unNombre[50];
    getString("\n\nIngrese un nombre:",&unNombre);
    strcpy(nombre[0],unNombre);*/ //ESto para verificar el getString, que me de el nombre ingresado y dentro de [] el lugar que remplaza este valor

             for(i=0;i <CANTIDAD_ALUMNOS; i++)
                {
                    getString("\n\nIngrese un nombre:",&nombre[i]);
                   /* getString("\n\nIngrese un apellido:",&apellido[i]);
                    getString("\n\nIngrese la edad:",&edad[i]);
                    getString("\n\nIngrese una nota:",&nota[i]);*///me va a pedir, 4 veces los datos del get, debido a:#define CANTIDAD_ALUMNOS 4.
                    printf("nombre y apellido:%s %s\t",nombre[i],apellido[i]); // barra /t, para tabular.
                    printf("\tedad:%d\t",edad[i]);
                    printf("\tnota:%d\n",nota[i]);
                }

    return 0;
}
    void getString(char mensaje[],char input[])
    {
        printf(mensaje);
        scanf("%s",input);
    }

 int getStringLetras(char mensaje[],char input[]);
 char aux[50]

 if(palabra[i]!='')//con comillas simples.
    {
        if(palabra[i]<'a'&& palabra[i]>'z')
        {
            if(palabra[i]<'A' && palabra[i]>'Z')
            {
                Return 0;
            }
        }
    }

