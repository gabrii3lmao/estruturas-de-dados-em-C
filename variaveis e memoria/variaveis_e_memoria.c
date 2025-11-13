#include <stdio.h>

int main(){
    int a = 10;
    int *p1 = &a;
    int *p2 = NULL;
    printf("a = %d, *p1 = %d\n\n", a, *p1);

    p2 = p1;
    *p2 = 5;
    printf("a = %d, *p1 = %d, *p2 = %d\n\n", a, *p1, *p2 );

    return 0;
}