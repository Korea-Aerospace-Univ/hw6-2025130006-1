#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    
    int arr1[20] = {};
    int arr2[20] = {};
    
    int *p = nullptr;
    for (p = arr1 ; p < arr1 + N; p++) scanf("%d", p);
    
    int *q = nullptr;
    for (q = arr2 ; q < arr2 + N; q++) scanf("%d", q);

    int sum = 0;
    
    for (p = arr1, q = arr2 + N - 1 ; p < arr1 + N ; p++, q--) {
        sum = *p + *q;
        printf(" %d", sum);
    }
    
    return 0;
}
