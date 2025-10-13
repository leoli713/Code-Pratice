#include <stdio.h>

unsigned char id[10001]; 

int main() {
    int N, R, i;
    while (scanf("%d%d", &N, &R) == 2) {

        // 初始化
        for (i = 1; i <= N; i++) {
            id[i] = 1;
        }

        // 讀取 R 個歸還的編號
        for (int j = 0; j < R; j++) {
            scanf("%d", &i);
            id[i] = 0;
        }

        // 輸出沒歸還的編號
        int f = 1;
        for (i = 1; i <= N; i++) {
            if (id[i] == 1) {
                if (!f) printf(" ");
                printf("%d", i);
                f = 0;
            }
        }

        // 如果全部都有歸還
        if (N == R) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}