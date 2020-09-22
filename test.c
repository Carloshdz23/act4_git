#include <stdio.h>

void capturar_enteros()
{
    int enteros[5];
    int suma=0;
    float promedio;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i",&enteros[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        printf("%i\n", enteros[i]);
    }
    
    for (size_t i = 0; i < 5; i++)
    {
        suma = suma + enteros[i]; //suma += enteros[i]
    }

    printf("Suma: %i\n", suma);
    printf("Promedio: %f\n", suma/5.0);
}

int main()
{
    char opc;

    do
    {
        printf("1. Capturar Enteros\n");
        printf("2. Mostrar 'n' veces la Cadena\n");
        printf("3. Agrega Personaje\n");
        printf("4. Salir\n");
        scanf("%c",&opc);

        switch(opc)
        {
        case '1':
            capturar_enteros();
            break;
        case '2':

            break;
        case '3':

            break;
        default:
            break;
        }

        fflush(stdin);
    } while(opc!='4');
        
    return 0;
}