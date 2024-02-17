#include <iostream>

void swap(int* a, int* b) {
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (*(arr + i) > *(arr + j)) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void selectionSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {

        int minInd = i;
        
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[minInd]) {
                minInd = j;
            }
        }

        swap(&arr[minInd], &arr[i]);
    }

}

int main()
{
    int arr[] = { 1,3,5,4,2,6};
    int len = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, len);

    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }
}