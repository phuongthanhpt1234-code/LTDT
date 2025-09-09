#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int n;

   
    while (scanf("%d", &n) != EOF) {
        int count = 0;
        int i = 5;

     
        while (n / i > 0) {
            count = count + (n / i);
            i = i * 5;
        }

  
        printf("%d\n", count);
    }

    return 0;
}

