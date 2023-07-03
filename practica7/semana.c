int main(){

    int dia;
    printf("Intruduzca un numero\n");
    scanf("%d",&dia);

    switch(dia){
        case(1):
        printf("Lunes\n");
        break;
        case(2):
        printf("Martes\n");
        break;
        case(3):
        printf("Miercoles\n");
        break;
        case(4):
        printf("Jueves\n");
        break;
        case(5):
        printf("Viernes\n");
        break;
        case(6):
        printf("sabado\n");
        break;
        case(7):
        printf("Domingo\n");
        break;
        default:
        printf("Numero no valido\n");
        break;
    }

    return 0;
}
