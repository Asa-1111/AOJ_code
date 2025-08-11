#include <stdio.h>

int S[100000], n;

int binarySearch(int key) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (S[mid] == key) return 1;
        if (S[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return 0;
}

int main() {
    int i, q, C = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &S[i]);
    }
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        int T;
        scanf("%d", &T);
        if (binarySearch(T)) C++;
    }
    printf("%d\n", C);
    return 0;
}
