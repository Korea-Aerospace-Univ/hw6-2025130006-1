#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    
    int arr1[N] = {};
    int arr2[N] = {};
    
    int *p = arr1;
    for (int i = 0; i < N; i++) scanf("%d", p + i);
    
    int *q = arr2;
    for (int i = 0; i < N; i++) scanf("%d", q + i);
    
    for (int i = 0; i < N; i++) {
        int sum = *(p + i) + *(q + i);
        printf(" %d", sum);
    }
    
    return 0;
}
