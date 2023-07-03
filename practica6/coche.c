int main(){

    float base, kil, con, tot;
    printf("Intruduzca el precio base del veiculo\n");
    scanf("%f",&base);
    printf("Intruduzca el kilometraje del veiculo\n");
    scanf("%f",&kil);
    printf("Intruduzca el consumo del veiculo\n");
    scanf("%f",&con);
    if((kil<2000)&&(con<=5)){
        tot=base+base*0.2;
        printf("El precio final del veiculo es de: %.2f\n",tot);
    }
    else{
        if((kil>2000)&&(con<=5)){
        tot=base+base*0.1;
        printf("El precio final del veiculo es de: %.2f\n",tot);
        }
        else{
            if(con>5){
        tot=base+base*0.05;
        printf("El precio final del veiculo es de: %.2f\n",tot);
        }
        }
    }


    return 0;
}
