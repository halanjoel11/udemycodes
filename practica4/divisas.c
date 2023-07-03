int main(){

    float euro, peze;
    printf("Intruduzca la cantidad de Euros que quiere convertir en pezetas\n");
    scanf("%f",&euro);
    peze = euro*166.386;
    printf("%.2f euros equivale a: %.2f pezetas\n",euro,peze);

    return 0;
}
