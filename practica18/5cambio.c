#include <stdio.h>

void multivec(int *vector, int elem, int num);

int main() {
    int vector[9] = {1,2,3,4,5,6,7,8,9};
    multivec(&vector[0],9,3);

    for(int i=0; i<9; i++){
        printf("%d ",vector[i]);
    }
    return 0;
}

void multivec(int *vector, int elem, int num){
    for(int i=0; i<elem; i++){
        *(vector+i) = *(vector+i)*num;
    }

}

