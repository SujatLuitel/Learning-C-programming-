#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Using a pointer to calculate the sum
    int sum = 0;
    int *ptr = arr; // Pointer pointing to the first element of the array

    for (int i = 0; i < N; i++) {
        sum += *ptr; // Dereferencing the pointer to access the value
        ptr++; // Moving the pointer to the next element
    }

    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}

