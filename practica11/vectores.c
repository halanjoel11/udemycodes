#include <stdio.h>

int main(){
    
    int mayor=0, menor=0;
    float suma=0, prom=0;
    float peso[5]; 
    for (int i=0; i<5; i++){
        printf("Intruduzca el peso\n");
        scanf("%f",&peso[i]);
        suma = suma + peso[i];
    }
    prom = suma/5;
    for (int i=0; i<5; i++){
        if(peso[i]>=prom){
            mayor++;
        }
        else{
            menor++;
        }
    }
    printf("El promedio de peso es: %f\nGente con peso mayor o igual al promedio %d\nGente coon peso menor al promedio %d",prom,mayor,menor);
    return 0;
}