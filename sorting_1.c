//Sorting array in Ascending order
#include <stdio.h>

int main() {
    int array[10] = {1, 5, 4, 7, 2, 9, 32, 3, 10, 15};
    int len = sizeof(array) / sizeof(array[0]);
    int temp;

    printf("\nOriginal array is: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }

    // Sorting using simple bubble sort (ascending)
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (array[j] < array[i]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nSorted array is: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
