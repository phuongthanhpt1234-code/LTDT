#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int n;
    scanf("%d", &n);  

    int a[1001];        
    int mark[1001] = {0}; 

    int isvalid = 1; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

      
        if (a[i] < 1 || a[i] > n || mark[a[i]] == 1) {
            isvalid = 0;
        }

        mark[a[i]] = 1;
    }

    if (isvalid)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
