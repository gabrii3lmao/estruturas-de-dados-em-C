#include <stdio.h>
#include <stdlib.h>

int print_elementos_vetor(const int *v, int size){
    for(int i = 0; i < size; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
    puts("===================");
}

void somar_vetor_escalar(int v[], int n, int escalar){
    for(int i = 0; i < n; i++){
        v[i] += escalar;
    }
}


void desaloca_vetor(int **v){
    free(*v);
    *v = NULL;
}

int main(){
    // alocação de um vetor estático (stack)
    int vs[5] = {1, 2, 3, 4, 5};


    print_elementos_vetor(vs, 5);
    somar_vetor_escalar(vs, 5, 10);
    print_elementos_vetor(vs, 5);

    puts("### VETOR DINAMICO COM CALLOC\n");
    int *vh = (int *) calloc(5, sizeof(int));
    for(int i = 0; i < 5; i++){
        vh[i] = i * 100;
    }

    print_elementos_vetor(vh, 5);
    somar_vetor_escalar(vh, 5, 10);
    print_elementos_vetor(vh, 5);

    // desalocando o vetor dinâmico
    desaloca_vetor(&vh);
    return 0;
}