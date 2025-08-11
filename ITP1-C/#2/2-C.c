#include <stdio.h>

void sortThreeNumbers(int *a, int *b, int *c) {
    int temp;
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    sortThreeNumbers(&num1, &num2, &num3);

    printf("%d %d %d\n", num1, num2, num3);

    return 0;
}
