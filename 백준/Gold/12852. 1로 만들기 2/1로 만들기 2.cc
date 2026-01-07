#include <stdio.h>

int dp[1000001];
int prev[1000001];

int main(void) {
    int n = 0;
    scanf("%d", &n);

    dp[1] = 0;
    prev[1] = 0;

    for (int i = 2; i <= n; i++) {
        // 기본: 1을 빼는 경우
        dp[i] = dp[i - 1] + 1;
        prev[i] = i - 1;

        if (i % 2 == 0 && dp[i] > dp[i / 2] + 1) {
            dp[i] = dp[i / 2] + 1;
            prev[i] = i / 2;
        }

        if (i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
            dp[i] = dp[i / 3] + 1;
            prev[i] = i / 3;
        }
    }

    printf("%d\n", dp[n]);

    while (n > 0) {
        printf("%d ", n);
        n = prev[n];
    }

    return 0;
}
