// quick sort
#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int left = low + 1;
    int right = high;

    while (left <= right) {

        while (left <= high && arr[left] <= pivot)
            left++;

        while (arr[right] > pivot)
            right--;

        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[right];
    arr[right] = temp;

    return right;
}


void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

int main() {
    int arr[6] = {4, 2, 9, 0, 1, 8};
    int n = 6;

    quicksort(arr, 0, n - 1);

    printf("sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
