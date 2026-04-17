// insertion sort
#include <stdio.h>

int main() {
    int i, j;
    int n = 6;
    int arr[6] = {4, 2, 9, 0, 1, 8};
    for(i = 1; i < n; i++) {
        j = i;
        while(j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j = j - 1;
        }
    }
    printf("Sorted array: "); 
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }
    
    return 0;
}
