#include <stdio.h>


int main(){
    int m[3][3] = {
        {2, 4, 8},
        {3, 9, 27}, 
        {4, 16, 64}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("m[%d][%d] = %d, &m[%d][%d] = %p\n", i, j, m[i][j], i, j, &m[i][j]);
        }
    }

    return 0;
}