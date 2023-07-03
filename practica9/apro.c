#include <stdio.h>

int main(){
    
    int alu, repro=0, apro=0;
    float nota;
    printf("Intruduzca la cantidad de alumnos\n");
    scanf("%d",&alu);
    for(int i=1; i<=alu; i++){
        printf("Ingrese la nota del alumno numero %d\n",i);
        scanf("%f",&nota);
        if (nota>=6){
            apro++;
        }
        else{
            repro++;
        }
    }
    printf("La cantidad de alumnos aprobados es de: %d\nLa cantidad de alumnos reprobados es de: %d",apro,repro);

    return 0;
}
