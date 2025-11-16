#include <stdio.h>

int main(){
    int v[5] = {0, 1, 2, 3, 4};
    int *p;
    p = v;
    p[3] = p[4] = 10;
    printf("&v = %p, v = %p, *v = %d\n", &v, v, *v);
    printf("&p = %p p = %p, *p = %d \n", &p, p, *p);
    printf("p[3] = %d", p[3]);
    printf("v[3] = %d", v[3]);


    return 0;
}