#include <stdio.h>

int main(){

    int i = 0;
    int pos = -1;
    char cadena[69];
    char cara;
    printf("Introduce una cadena\n");
    gets(cadena);
    printf("Introduce un caracter\n");
    cara = getchar();
    while(cadena[i]!='\0'&&pos==-1){
        if(cadena[i]==cara){
            pos = i;
        }
        i++;
    }
        if(pos != -1){
            printf("El caracter %c se encuentra en la poscicion numero %d de la cadena\n",cara,pos);
        }
        else{
            printf("El caracter %c no se encuentra en la cadena\n",cara);
        }
}
