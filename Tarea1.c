/*
Nombre de los integrantes: Dumuzi Ruiz Muñoz y Sebastian Saravia Guzman
Nombre de la docente: Isabel Barros Inostroza
Seccion: 307

Enlace YouTube: http://[enlace]
*/

#include <stdio.h>
#include <stdlib.h>

//Función que retorna la cantidad de dígitos impares presente en un número 'e'
int CantidadImpar(int e)
{
    //'Cantidad' es la cantidad de digitos impares de 'e'
    int Cantidad = 0;
    while (e > 0)
    {
        //Toma el ultimo numero de 'e', si es impar lo agrega a un contador de numeros impares
        if ((e % 10) % 2 == 1)
        {
            //Cantidad de digitos impares de 'e' aumentando en 1
            Cantidad++;
        }
        //Elimina el ultimo numero que quedo en la variable 'e'
        e = e/10;
    }
    return Cantidad;
}

//Función que retorna la cantidad de dígitos pares presente en un número 'e'
int CantidadPar(int e)
{
    //'Cantidad' es la cantidad de digitos pares de 'e'
    int Cantidad = 0;
    while (e > 0)
    {
        //Toma el ultimo numero de 'e', si es par lo agrega a un contador de numeros pares
        if ((e % 10) % 2 == 0)
        {
            //Cantidad de digitos pares de 'e' aumentando en 1
            Cantidad++;
        }
        //Elimina el ultimo numero que quedo en la variable 'e'
        e = e/10;
    }
    return Cantidad;
}

//Función que retorne la cantidad de números pares comprendidos en el intervalo [a,b] que tienen una cantidad par de dígitos impares
int CantidadParDeImpares(int a, int b)
{
    //'CantidadPares' es la cantidad de los numeros pares que tienen una cantidad par de dígitos impares
    int CantidadPares = 0;
    //Recorre los numeros desde el intervalo 'a' mientras sean menores que el intervalo 'b'
    for (int i = a; i < b; i++)
    {
        //'Numero' es el numero que esta dentro del intervalo, 'Cantidad' es la cantidad de digitos impares de 'Numero'
        int Numero = i, Cantidad = 0;
        //Verifica si el numero del intervalo es par o impar
        if ((Numero % 10) % 2 == 0)
        {
            //Este bucle analizara todos los digitos de 'Numero' y comprobara si esa cantidad es par o impar
            while (Numero > 0)
            {
                //Si el ultimo digito de 'Numero' es impar, 'Cantidad' aumenta en 1'
                if ((Numero % 10) % 2 == 1)
                {
                    //Cantidad de digitos impares de 'Numero' aumentando en 1
                    Cantidad++;
                }
                //Elimina el ultimo digito de 'Numero'
                Numero = Numero/10;
            }
            //Verifica si la cantidad de los digitos impares en 'Numero' fue par
            if (Cantidad % 2 == 0)
            {
                //Cantidad de los numeros pares que tienen una cantidad par de dígitos impares aunmentando en 1
                CantidadPares++;
            }
        }
    }
    return CantidadPares;
}

//Función que retorne la suma de los números impares comprendidos en el intervalo [a,b] que tienen una cantidad impar de dígitos pares
int SumaDeImpares(int a, int b)
{
    //'CantidadPares' es la cantidad de los numeros pares que tienen una cantidad par de dígitos impares
    int suma = 0;
    //Recorre los numeros desde el intervalo 'a' mientras sean menores que el intervalo 'b'
    for (int i = a; i < b; i++)
    {
        //'Numero' es el numero que esta dentro del intervalo, 'Cantidad' es la cantidad de digitos pares de 'Numero'
        int Numero = i, Cantidad = 0;
        //Verifica si el numero del intervalo es impar
        if ((Numero % 10) % 2 == 1)
        {
            //Este bucle analizara todos los digitos de 'Numero' y comprobara si esa cantidad es par o impar
            while (Numero > 0)
            {
                //Si el ultimo digito de 'Numero' es par, 'Cantidad' aumenta en 1'
                if ((Numero % 10) % 2 == 0)
                {
                    //Cantidad de digitos pares de 'Numero' aumentando en 1
                    Cantidad++;
                }
                //Elimina el ultimo digito de 'Numero'
                Numero = Numero/10;
            }
            //Verifica si la cantidad de los digitos pares en 'Numero' fue impar
            if (Cantidad % 2 == 1)
            {
                //Suma de los números impares comprendidos en el intervalo [a,b] que tienen una cantidad impar de dígitos pares
                suma = suma + i;
            }
        }
    }
    return suma;
}

//Función que imprima los números comprendidos en el intervalo [a,b] que tienen una cantidad impar de dígitos pares
int ImprecionCantidadImparDePares(int a, int b)
{
    //Recorre los numeros desde el intervalo 'a' mientras sean menores que el intervalo 'b'
    for (int i = a; i < b; i++)
    {
        //'Numero' es el numero que esta dentro del intervalo, 'Cantidad' es la cantidad de digitos pares de 'Numero'
        int Numero = i, Cantidad = 0;
        //Este bucle analizara todos los digitos de 'Numero' y comprobara si esa cantidad es par o impar
        while (Numero > 0)
        {
            //Si el ultimo digito de 'Numero' es par, 'Cantidad' aumenta en 1'
            if ((Numero % 10) % 2 == 0)
            {
                //Cantidad de digitos pares de 'Numero' aumentando en 1
                Cantidad++;
            }
            //Elimina el ultimo digito de 'Numero'
            Numero = Numero/10;
        }
        //Verifica si la cantidad de los digitos en 'Numero' fue impar
        if (Cantidad % 2 == 1)
        {
            //Muestra en pantalla el numero que tienen una cantidad impar de dígitos pares
            printf("%d\n", i);
        }
    }
    return 0;
}

//Funcion Main, es la funcion principal del programa
int main()
{
    //Nombre de los integrantes, Nombre de la docente, Seccion, Enlace YouTube
    printf("Nombre de los integrantes: Dumuzi Ruiz Muñoz y Sebastian Saravia Guzman\nNombre de la docente: Isabel Barros Inostroza\nSeccion: 307\nEnlace YouTube: http://[enlace]\n\n");
    //Creacion de las variables, y explicacion de las condiciones
    int a,b,e,opcion;
    printf("Condiciones:\n Escriba numeros entre 4 y 5 digitos\n El numero \'a\' debe ser menor que el numero \'b\'\n\n");
    //Pide al usuario que escriba un numero de 4 a 5 digitos en la variable (a), si no es asi lo pedira de nuevo hasta que el numero sea valido
    do
    {
        printf("Introdusca un numero (a): ");
        scanf("%i", &a);
        //El numero 99999 no puede ser utilizado porque no cumpliria la condicion de a<b ya que el 99999 es el mayor de los numero que cumple la condicion de maximo 5 digitos
        if (a == 99999)
        {
            printf("\nEl numero 99999 no puede ser utilizado porque no cumpliria la condicion de \'a\' debe ser menor que \'b\'\n");
            exit(-1);
        }
    } while (a <= 999 || a >= 100000);
    //Pide al usuario que escriba un numero de 4 a 5 digitos en la variable (b), si no es asi lo pedira de nuevo hasta que el numero sea valido
    do
    {
        printf("Introdusca un numero (b): ");
        scanf("%i", &b);
    } while (a > b || b <= 999 || b >= 100000);
    //Pide al usuario que escriba un numero de 4 a 5 digitos en la variable (e), si no es asi lo pedira de nuevo hasta que el numero sea valido
    do
    {
        printf("Introdusca un numero (e): ");
        scanf("%i", &e);
    } while (e <= 999 || e >= 100000);
    //Imprime el resultado de las variables y pide al usuario que elija la funcion que desea realizar
    do
    {
        //Imprime el resultado de las variables "a", "b", "c"
        printf("\n(a) = %d\n(b) = %d\n(e) = %d\n\n", a, b, e);
        //Pide al usuario que elija la funcion
        printf("1) Cantidad de dígitos impares de (e)\n");
        printf("2) Cantidad de dígitos pares de (e)\n");
        printf("3) Cantidad de números pares en el intervalo [a,b] que tienen una cantidad par de dígitos impares\n");
        printf("4) Suma de los números impares en el intervalo [a,b] que tienen una cantidad impar de dígitos pares\n");
        printf("5) Imprime los números en el intervalo [a,b] que tienen una cantidad impar de dígitos pares\n");
        printf("Ingrese el numero de la función que desea: ");
        scanf("%d", &opcion);
    //Si el numero de la opcion que elige no esta entre 1 y 5, repetira la pregunta
    } while (opcion < 1 || opcion > 5);

    //Comprueba que número ha sido el introducido por el usuario
    switch(opcion)
    {
        case 1:
            printf("\nLa cantidad de dígitos impares de (e) es: %d\n", CantidadImpar(e));
            break;
        case 2:
            printf("\nLa cantidad de dígitos pares de (e) es: %d\n", CantidadPar(e));
            break;
        case 3:
            printf("\nLa cantidad de números pares en el intervalo [%d,%d] que tiene una cantidad par de dígitos impares es: %d\n", a, b, CantidadParDeImpares(a, b));
            break;
        case 4:
            printf("\nLa suma de los números impares en el intervalo [%d,%d] que tiene una cantidad impar de dígitos pares es: %d\n", a, b, SumaDeImpares(a, b));
            break;
        case 5:
            printf("\nImpresion de los números en el intervalo [%d,%d] que tienen una cantidad impar de dígitos pares:\n", a, b);
            ImprecionCantidadImparDePares(a, b);
            break;
    }
    return 0;
}
