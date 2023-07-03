int main(){

    float nota;
    printf("Ingrese la nota del estudiante\n");
    scanf("%f",&nota);
    if(nota<5){
        printf("El estudiante se quedo por vago\n");
    }
    else{
        if(nota==6){
            printf("El estudiante paso con las justas\n");
        }
        else{
            if((nota==7)||(nota==8)){
                printf("El estudiante es bueno\n");
            }
            else{
                if((nota==9)||(nota==10)){
                    printf("El estudiante no tiene amigos\n");
                }
                else{
                    printf("ingrese una nota valida\n");
                }
            }
        }
    }


    return 0;
}
