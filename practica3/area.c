#include <stdio.h>

int main(){

    float base, altura, area;
    printf("Intruduzca la base del rectangulo\n");
    scanf("%f",&base);
    printf("Intruduzca la altura del rectangulo\n");
    scanf("%f",&altura);
    area = base*altura;
    printf("El area del rectangulo es: %.2f\n",area);

    return 0;
}
