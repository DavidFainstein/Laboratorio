#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int largo;
    int compara;
    char nombre[6]; //nombre[50]; // siempre declarar un elemento mas del que necesito, ej un arrays de 11 para 10 elementos.
    char otroNombre[50]="Jose Perez";

    printf("ingrese su nombre: ");// cuando tenemos que leer una cadena de caracteres, vamos a tratar de no usar el scanf

    /*strupr(otroNombre);//todo mayusculas
    printf("Su nombre es %s",otroNombre);

    strlwr(otroNombre);// todo en minusculas
    printf("su nombre es %s:",otroNombre);*/

    strlwr(otroNombre);

    strcat(nombre,otroNombre); //concateno variables.


    //printf("%d--%d\n\n",nombre,&nombre); se puede hacer, pero esta mal hacerlo.

    //fgets(nombre,50,stdin); //fgets para que no desborde caracteres
    // scanf("%[^\n]", nombre); // una nueva mascara de datos
    //scanf("%s",&nombre); %s para leer string
    //gets(nombre);//no sirve para linux.
    //strlen("hola");// cuantos caracteres tiene la cadena sin contar el /0.
    //largo=strlen(nombre);
    //printf("%d",largo);// con fgets, toma un caracter de mas, devido al \n.

    //strcpy(nombre,otroNombre); //"pepe");
    //strncpy(nombre,otroNombre,5);// copia de manera segura.
    //printf("su nombre es: %s",nombre);

    //compara=strcmp(nombre,"pepe");// lo que hace esto es comparar la cadena ej 0/pepe/pepe  -1/maria/pepe(esto da -1, porque m es mas chico que p en el abd) 1/walter/pepe.
//compara=stricmp(nombre,"pepe");//strIcmp, la I significa ignorar la diferencia de mayuscula y minuscula,(funcion key sensitive).
    //printf("%d",compara);
    /*if(nombre=="pepe")
        {
            printf("usted se llama pepe");
        }*/

    //printf("\nSu nombre es: %s",nombre);



    return 0;
}
