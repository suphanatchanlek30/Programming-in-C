#include <stdio.h>

int main(void) {

    // Set variables
    int s, t;
    int a, b;
    int m, n;

    // Input 
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);

    int mango[m], rose_apple[n];

    // Input distance mango
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &mango[i]);
    }

    // Input distance rose_apple
     for (int i = 0; i < n; i++)
    {
        scanf("%d", &rose_apple[i]);
    }
    
    // Calculate mango
    int count_mango = 0;
    for (int i = 0; i < m; i++)
    {
        if(mango[i] + a >= s && mango[i] + a <= t){
            count_mango += 1;
        }
    }

     // Calculate rose_apple
    int count_rose_apple = 0;
    for (int i = 0; i < n; i++)
    {
        if(rose_apple[i] + b >= s && rose_apple[i] + b <= t){
            count_rose_apple += 1;
        }
    }

    // Output count mango and rose_apple
    printf("%d\n", count_mango);
    printf("%d\n", count_rose_apple);
    
    return 0;
}