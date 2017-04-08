#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    char seguir='s';
    int opcion=0;
    float A=0;
    float B=0;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int factoria;
    int enteroA;

    while(seguir=='s')
    {

        printf("1- Ingresar 1er operando (A=%f)\n",A);
        printf("2- Ingresar 2do operando (B=%f)\n",B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        fflush(stdin);


        switch(opcion)
        {
            case 1:
                A=pedirNumero();

                break;
            case 2:
                B=pedirNumero();
                break;
            case 3:
                suma=sumar(A,B);
                printf("La suma es: %f \n",suma);
                break;
            case 4:
                resta=restar(A,B);
                printf("La resta es: %f \n",resta);
                break;
            case 5:
                division=dividir(A,B);
                if(B!=0){
                printf("La division es: %f \n",division);
                }
                else{
                    printf("No se puede dividir entre cero");
                }
                break;
            case 6:
                multiplicacion=multiplicar(A,B);
                printf("La multiplicacion es: %f \n",multiplicacion);
                break;
            case 7:
                enteroA=(int) A;

                if (enteroA>0 && enteroA<13){
                factoria=factorial(enteroA);
                printf("La factorial del primer numero entero es: %d \n",factoria);
                }
                else{
                    printf("No se puede sacar factorial de numero menor o igual a 0\n o mayor a 13");
                }
                break;
            case 8: suma=sumar(A,B);
                    printf("La suma es: %f \n",suma);
                    resta=restar(A,B);
                    printf("La resta es: %f \n",resta);
                    division=dividir(A,B);
                    printf("La division es: %f \n",division);
                    multiplicacion=multiplicar(A,B);
                    printf("La multiplicacion es: %f \n",multiplicacion);

                break;
            case 9:
                seguir = 'n';
                break;
        }
    }
    seguir='s';
    return 0;
}
