#include <stdio.h>

int main(){
    int v[5] = {0, 1, 2, 3, 4};

    for(int i = 0; i < sizeof(v)/sizeof(v[0]); i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
    }

    printf("&v = %p, v = %p\n", &v, v);
    printf("&(v + 1) = %p, v + 1 = %p, *v + 1 = %d\n", &v+1, v+1, *v+1);
    printf("&v[1] = %p, v[1] = %d\n", &v[1], v[1]);




    return 0;
}