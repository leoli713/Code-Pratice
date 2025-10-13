#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for (int x = 1; x < 2 * n; x += 2) {
        // 列印一行：A開頭的行
        for (int i = 0; i < x; i++) printf("A");
        for (int i = 0; i < (2 * n - 1 - x) / 2; i++) printf("XA");
        printf("\n");

        // 如果還沒到最後一層，列印下一行：X開頭的行
        if (x < 2 * n - 1) {
            for (int i = 0; i < x; i++) printf("X");
            for (int i = 0; i < (2 * n - 1 - x) / 2; i++) printf("XA");
            printf("\n");
        }
    }

    return 0;
    }