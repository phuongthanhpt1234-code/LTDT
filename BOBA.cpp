#include <bits/stdc++.h> 
using namespace std;

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        char s[110]; 
        scanf("%s", s);
        int count[26][26][26] = {0}; 
        int maxCount = 0;

        int len = strlen(s);
        for (int i = 0; i <= len - 3; i++) {
           
            int a = s[i] - 'A';
            int b = s[i+1] - 'A';
            int c = s[i+2] - 'A';

            count[a][b][c]++; 
            if (count[a][b][c] > maxCount) {
                maxCount = count[a][b][c]; 
            }
        }

        printf("%d\n", maxCount); 
    }

    return 0;
}

