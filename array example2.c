#include <stdio.h>

int main() {
    int n, element, count = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &element);

    // Count how many times the element appears in the array
    for(int i = 0; i < n; i++) {
        if(arr[i] == element) {
            count++;
        }
    }

    // Output the result
    if(count > 0) {
        printf("The element %d appears %d time(s) in the array.\n", element, count);
    } else {
        printf("The element %d does not appear in the array.\n", element);
    }

    return 0;
}

