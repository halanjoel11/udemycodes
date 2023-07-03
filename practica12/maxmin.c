#include <stdio.h>

int main(){
    
    int nume[10] = {7,8,45,96,23,0,-45,-1,8,7};
    int max = nume[0];
    int min = nume[0];

    for(int i=1; i<10; i++){
        if(nume[i]>max){
            max = nume[i];
        }
        if(nume[i]<min){
            min = nume[i];
        }
    }
    printf("El numero maximo q se encuentra dentro del vector es: %d\n",max);
    printf("El numero minimo q se encuentra dentro del vector es: %d\n",min);
    return 0;
}