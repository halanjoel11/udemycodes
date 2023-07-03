#include <stdio.h>

int main() {

    float vestor[5];
    float *halan = &vestor[0];
    float media =0;

    for (int i=0; i<5; i++){
        printf("Introduce el numero real\n");
        scanf("%f",&vestor[i]);
    }

    for (int i=0; i<5; i++){
        media = media + *(halan+i);
    }
    media = media/5;
    printf("la media de los valores  del vector es %.2f\n",media);

    return 0;
}

