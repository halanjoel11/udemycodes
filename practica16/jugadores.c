#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    struct jugador{
        char nombre[50];
        int edad;
        float altura;
    };

    struct jugador jugadores[5];

    for (int i=0; i<5; i++){
        printf("Introduce el nombre del jugador %d\n",i+1);
        gets(jugadores[i].nombre);
        printf("Introduce la edad del jugador %d\n", i+1);
        scanf("%d",&jugadores[i].edad);
        printf("Introduce la altura del jugador %d\n", i+1);
        scanf("%f",&jugadores[i].altura);

        fflush(stdin);
    }
    int caso;

    printf("Elija la opcion que desea realizar %d\n1. Listar nombres\n2. Buscar jugador\n3. Jugador mas alto\n4. salir\n");
    scanf("%d",&caso);
    
    fflush(stdin);
    switch(caso){
        case(1):
        for (int i=0;i<5;i++){
                printf("Jugador de nombre %s y altura %.2f\n", jugadores[i].nombre, jugadores[i].altura);
            }
        break;
        case(2):
        char busca[50];
            printf("Introduce el nombre del jugador que deseas buscar\n");
            gets(busca);
            int encontrado = 0;

            for (int i=0; i<5; i++){
                if (strcmp(jugadores[i].nombre,busca) == 0){
                    encontrado = 1;
                    printf("La edad del jugador es %d y su altura %.2f\n",jugadores[i].edad, jugadores[i].altura);
                }
            }
            if (encontrado == 0){
                printf("Jugador no encontrado\n");
            }
        break;
        case(3):
        int emalto = jugadores[0].edad;
        float malto = jugadores[0].altura;
        char nmalto[50];
            strcpy(nmalto,jugadores[0].nombre);
            for (int i=1; i<5; i++){
                if (jugadores[i].altura > malto){
                    strcpy(nmalto,jugadores[i].nombre);
                    emalto = jugadores[i].edad;
                    malto = jugadores[i].altura;
                }
            }
            printf("El nombre del jugador de mayor altura es %s y su edad es %d\n",nmalto,emalto);
        break;
        case(4):
        printf("saliendo del programa <3\n");
        break;
        default:
        printf("Numero no valido\n");
        break;
    }
}


