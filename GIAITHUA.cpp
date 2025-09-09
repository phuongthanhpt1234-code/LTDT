#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1001


int isPrime[MAX];

int primes[MAX];
int primeCount = 0;


int count[MAX];

void sonto() {
   
    for (int i = 2; i < MAX; i++) {
        isPrime[i] = 1;
    }

    for (int i = 2; i * i < MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    for (int i = 2; i < MAX; i++) {
        if (isPrime[i]) {
            primes[primeCount++] = i;
        }
    }
}

void factorize(int n) {
    for (int i = 0; i < primeCount; i++) {
        int p = primes[i];
        while (n % p == 0) {
            count[i]++;
            n /= p;
        }
        if (n == 1) break;
    }
}

int main() {
    int n;

    
    sonto();

   
    while (scanf("%d", &n) != EOF) {
       
        memset(count, 0, sizeof(count));

      
        for (int i = 2; i <= n; i++) {
            factorize(i); 
        }

  
        for (int i = 0; i < primeCount; i++) {
            if (count[i] == 0) break; 
            printf("%d ", count[i]);
        }
        printf("\n");
    }

    return 0;
}
