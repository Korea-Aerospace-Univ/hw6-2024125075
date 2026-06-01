#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
   
    int A[20], B[20];
    int *pA, *pB;
   
    for (pA = A; pA < A + N; pA++) {
        scanf("%d", pA);
    }
   
    for (pB = B; pB < B + N; pB++) {
        scanf("%d", pB);
    }
   
    pB = B + N - 1;
   
    for (pA = A; pA < A + N; pA++, pB--) {
        printf(" %d", *pA + *pB);
    }
    printf("\n");
   
    return 0;
}
