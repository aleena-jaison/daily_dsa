// selection sort
#include <stdio.h>

int main() {
    int i, j, min;
    int n = 6;
    int arr[6] = {4, 2, 9, 0, 1, 8};
    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("Sorted array: "); 
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }
    
    return 0;
}
