#include <stdio.h>
 
int main() {
    int a[201];
    unsigned i;
    int max;
 
    max = a[200];
    for (i = -100; i<200; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
 
    printf("max element is %d", max);

}
