#include <stdio.h>

int main() {
    float weight, height, bmi;
    scanf("%f", &weight);
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("%.2f", bmi);

    return 0;
}