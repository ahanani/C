#include <stdio.h>

int arr[5] = {90, 100, 7000, 16, 5};

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void print(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void sort(int* array, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; ++j) {
            if(array[i] < array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
    print(array, size);
}



int main() {
    sort(arr, 5);
}