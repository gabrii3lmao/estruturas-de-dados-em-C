#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, n = 5;
    int *v;
    v = (int*)malloc(n * sizeof(int));
   
    for (int i = 0; i < 5; i++)
    {
        v[i] = i;
        printf("v[%d] =  %d, &v[%d] = %p\n", i, v[i], i, &v[i]);
    }

    free(v);
    printf("v = %p, &v = %p, &n = %p\n\n", v, &v, &n);

    return 0;
}   