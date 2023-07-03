#include <stdio.h>

int main()
{
    int informacion[3][4] = {{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int tempb=0,tempm=0, tempa=0;
    float promb=0,promm=0,proma=0;

    for (int i=0; i<3; i++){
        for (int j=1; j<4; j++){
            if (j == 1){
                tempb = tempb + informacion[i][j];
            }
            if (j == 2){
                tempm = tempm + informacion[i][j];
            }
            if (j == 3){
                tempa = tempa + informacion[i][j];
            }
        }
    }
    promb = tempb/3;
    promm = tempm/3;
    proma = tempa/3;

    printf("Promedio temporada baja: %.2f\nPromedio temporada media: %.2f\nPromedio temporada alta: %.2f",promb,promm,proma);
}
