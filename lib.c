#include <string.h>
#include "header.h"

void swap(char a[], char b[]) {
    char temp[CHARACTERS_LIMIT];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void stringqsort(char arr[][CHARACTERS_LIMIT], int low, int high) {
    if (low < high) {
            int i = low, j = high - 1;
            int pivot = (low + high) / 2;
            swap(arr[pivot], arr[high]);
            while (i <= j) {
                if (strcmp(arr[i], arr[high]) > 0) {
                    if (strcmp(arr[j], arr[high]) < 0) {
                        swap(arr[i], arr[j]);
                        i++;
                        j--;
                    } else {
                        j--;
                    }
                } else {
                    i++;
                }
            }
            swap(arr[i], arr[high]);
            stringqsort(arr, low, j);
            stringqsort(arr, i+1, high);
    }
}