#include <stdio.h>

int main() {
    int N, A[100], i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++) scanf("%d", &A[i]);
    int cnt = 0;
    for(i = 0; i < N; i++){
        for(j = N - 1; j > i; j--) {
            if(A[j] < A[j - 1]) {
                int tmp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = tmp;
                cnt++;
            }
        }
    }
    for(i = 0; i < N; i++) {
    if(i) printf(" ");
    printf("%d", A[i]);
    }
    printf("\n%d\n", cnt);
    return 0;
}