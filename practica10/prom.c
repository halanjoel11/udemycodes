#include <stdio.h>

int main(){
    
    float num=1, suma, prom;
    int cont=-1;
    do{
    printf("Intruduzca un numero\n");
    scanf("%f",&num);
    suma=suma+num;
    cont++;
   }
    while(num!=0);
    prom=suma/cont;
    printf("La suma de todos los numeros es: %.2f\nEl promedio de los numeros ingresados es de: %.2f",suma,prom);
    return 0;
}