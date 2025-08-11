#include <stdio.h>

int main() {
    int a, b;

    printf("縦と横の長さを空白で区切って入力しろ：");
    scanf("%d %d", &a, &b);

    int area = a * b;

    int perimeter = 2 * (a + b);

    printf("%d %d\n", area, perimeter);

    return 0;

}