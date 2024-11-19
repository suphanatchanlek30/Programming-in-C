#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    long long Net;
    int cost;
} NetPayment;

int calculateCost(long long Net) {
    if (Net < 0) return 0;
    if (Net < 1024 * 1024) return 0;
    if (Net <= 1024 * 1024 * 1024) return 100;
    if (Net <= 4 * 1024 * 1024 * 1024) return 200;
    if (Net <= 10 * 1024 * 1024 * 1024) return 300;
    return 400;
}

int compare(const void *a, const void *b) {
    NetPayment *userA = (NetPayment *)a;
    NetPayment *userB = (NetPayment *)b;
    if (userA->cost != userB->cost) return userA->cost - userB->cost;
    return strcmp(userA->name, userB->name);
}

int main(void) {
    int N;
    scanf("%d", &N);
    NetPayment User[N];
    int i;
    for (i = 0; i < N; i++) {
        scanf("%s %lld", User[i].name, &User[i].Net);
        User[i].cost = calculateCost(User[i].Net);
    }
    qsort(User, N, sizeof(NetPayment), compare);
    for (i = 0; i < N; i++) {
        printf("%s %d\n", User[i].name, User[i].cost);
    }
    return 0;
}

