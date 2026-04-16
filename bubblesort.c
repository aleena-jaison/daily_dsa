// bubble sort
#include <stdio.h>

int main() {
    int i, j, n;
    int arr[15];
    printf("no.of elements: ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("initial array: ");
    for(i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
    
    for(i=1;i<n;i++) {
        for(j=0;j<n-1;j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("\nfinal sorted array: ");
    for(i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}