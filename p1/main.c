#include <stdio.h>

int main(void)
{
    char arr[10] = {};
    char *p = nullptr;
    char *q = nullptr;
    
    for (p = arr ; p < arr + 10; p++) scanf ("%c", p);
    
    char max_char = '\0';
    int max_count = 0;
    
    for (p = arr; p < arr + 10 ; p++) {
        int current_count = 0;
        
        for (q = arr ; q < arr + 10 ; q++) {
            if (*p == *q) current_count++;
        }
        if (current_count > max_count) {
        max_count = current_count;
        max_char = *p;
        }
    }
        
    printf("%c %d", max_char , max_count);
        
    return 0;
}
