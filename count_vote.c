#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int votes[K];
    int vote_count[101] = {0};
	int i;
    for (i = 0; i < K; i++) {
        scanf("%d", &votes[i]);
        vote_count[votes[i]]++;
    }

    int max_votes = 0;
    int winner = 0;
    for (i = 1; i <= N; i++) {
        if (vote_count[i] > max_votes) {
            max_votes = vote_count[i];
            winner = i;
        }
    }

    printf("%d\n%d\n", winner, max_votes);

    return 0;
}

