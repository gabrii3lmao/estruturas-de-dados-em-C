#include <stdio.h>

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}


int main(){
    int x = 10;
    int y = 15;
    printf("x = %d, y = %d\n", x, y);
    puts("===============\n");
    troca(&x, &y);
    printf("x = %d, y = %d\n\n", x, y);

    return 0;
}