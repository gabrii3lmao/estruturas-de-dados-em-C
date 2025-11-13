#include <stdio.h>

void somar(int x, int y, int *z){
    puts("DENTRO DA FUNCAO ANTES");
    printf("z = %p, *z = %d\n\n", z, *z);
    *z = x + y;

    puts("DENTRO DA FUNCAO DEPOIS");
    printf("z = %p, *z = %d\n\n", z, *z);

}

int soma_e_sub(int a, int b, int *sub){
    int soma = a + b;
    *sub = a - b;
    return soma;
}


int main(){

    int a = 20;
    int b = 80;
    int c;
    int d;
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);

    c = soma_e_sub(a, b, &d);
    
    puts("====================");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);
    printf("&d = %p, d = %d\n", &d, d);
    return 0;
}