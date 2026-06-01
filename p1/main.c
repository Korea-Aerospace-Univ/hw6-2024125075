#include <stdio.h>

int main(void) {
    char arr[10];
    char *p, *q;
   
    for (p = arr; p < arr + 10; p++) {
        scanf("%c", p);
    }
   
    int max_freq = 0;
    char max_char = arr[0];
   
    for (p = arr; p < arr + 10; p++) {
        int count = 0;
       
        for (q = arr; q < arr + 10; q++) {
            if (*p == *q) {
                count++;
            }
        }
       
        if (count > max_freq) {
            max_freq = count;
            max_char = *p;
        }
    }
   
    printf("%c %d\n", max_char, max_freq);
   
    return 0;
}


