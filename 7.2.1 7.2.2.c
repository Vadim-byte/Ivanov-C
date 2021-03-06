#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int minimal(int array[], int n){
    int min =100;
    for (int i = 0; i < n; ++i) {
        if (min>array[i]){
            min = array[i];
        }
    }
    return min;
}

int sumAfMin(int array[], int n){
    int min = minimal(array, n), sum = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] == min){
            for (int j = i+1; j < n; ++j) {
                sum+= array[i];
            }
        }
    }
    return sum;
}

int vid(int array[], int a){
    int count = 0;

    for (int i = 0; i < a; ++i) {
        if (array[i] < 0){
            count++;
        }
    }
    return count;
    
}

int main() {
    int max = 100, min = -100, a = 100;
    srand(time(NULL));
    int array[100];
    for (int i = 0; i < a; i++) {
        array[i] = min + rand() % (max - min + 1);
        printf("%d ", array[i]);
    }
    printf("\nКількість від’ємних елементів масиву: %d", vid(array, a));
    printf("\nсума елементів масиву, розташованих після мінімального елементаr: %d", sumAfMin(array, a));
    return 0;
}
