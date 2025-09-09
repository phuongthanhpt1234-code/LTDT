#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdbool.h>

#define MAX 10001  

int main() {
    int nx, ny, nz;
    int x, i;


    bool markX[MAX] = {false};
    bool markY[MAX] = {false};
    bool markZ[MAX] = {false};

   
    scanf("%d", &nx);
    for (i = 0; i < nx; i++) {
        scanf("%d", &x);
        markX[x] = true;
    }

 
    scanf("%d", &ny);
    for (i = 0; i < ny; i++) {
        scanf("%d", &x);
        markY[x] = true;
    }

   
    scanf("%d", &nz);
    for (i = 0; i < nz; i++) {
        scanf("%d", &x);
        markZ[x] = true;
    }


    int common[MAX];  
    int count = 0;  

    for (i = 0; i < MAX; i++) {
        if (markX[i] && markY[i] && markZ[i]) {
            common[count++] = i;
        }
    }

    printf("%d\n", count);
    for (i = 0; i < count; i++) {
        printf("%d ", common[i]);
    }
    printf("\n");

    return 0;
}

