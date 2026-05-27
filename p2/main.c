
int main(void)
{
    int N;
    scanf("%d", &N);
    
    int arr1[20] = {};
    int arr2[20] = {};
    
    int *p = arr1;
    for (int i = 0; i < N; i++) scanf("%d", p + i);
    
    int *q = arr2;
    for (int i = 0; i < N; i++) scanf("%d", q + i);
    
    for (int i = 0; i < N; i++) {
        int sum = *(p + i) + *(q + N - 1 - i);
        printf(" %d", sum);
    }
    
    return 0;
}
