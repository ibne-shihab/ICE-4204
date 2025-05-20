#include <stdio.h>

// Function to calculate sum
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

// Function to calculate average
float calculateAverage(int sum, int size) {
    return (float)sum / size;
}

int main() {
    int arr[100], n, i = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter %d integers:\n", n);
    do {
        scanf("%d", &arr[i]);
        i++;
    } while (i < n);

    int sum = calculateSum(arr, n);
    float avg = calculateAverage(sum, n);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
