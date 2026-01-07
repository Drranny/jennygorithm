#include <stdio.h>
#include <string.h>

int main(void) {
    int i;
    scanf("%d", &i);

    // 문자열 저장 (길이 최대 50 + '\0')
    char j[i][51];

    // 문자열 입력
    for (int k = 0; k < i; k++) {
        scanf("%s", j[k]);
    }

    // 각 문자열 검사
    for (int k = 0; k < i; k++) {
        int count = 0;
        int valid = 1;

        int len = strlen(j[k]);

        // 길이가 홀수면 VPS 불가능
        if (len % 2 != 0) {
            printf("NO\n");
            continue;
        }

        for (int h = 0; h < len; h++) {
            if (j[k][h] == '(') {
                count++;
            } else { // ')'
                count--;
            }

            // 중간에 음수가 되면 바로 실패
            if (count < 0) {
                valid = 0;
                break;
            }
        }

        // 최종 판별
        if (count == 0 && valid) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
