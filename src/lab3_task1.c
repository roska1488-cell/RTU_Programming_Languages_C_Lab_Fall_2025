#include <stdio.h>
#include <limits.h>

// Function prototypes
int array_min(int arr[], int size);
int array_max(int arr[], int size);
int array_sum(int arr[], int size);
float array_avg(int arr[], int size);

int main(void) {
    int arr[] = {10, 20, 5, 30, 15};
    int size = 5;

    printf("Min: %d\n", array_min(arr, size));
    printf("Max: %d\n", array_max(arr, size));
    printf("Sum: %d\n", array_sum(arr, size));
    printf("Avg: %.2f\n", array_avg(arr, size));

    return 0;
}

// Implement functions below
int array_min(int arr[], int size) {
    int my_min = INT_MAX; // set to max possible integer value
    for (int i = 0; i < size; i++) {
        if (my_min > arr[i]) {
            my_min = arr[i];
        }
    }
    return my_min; // smallest element
}

int array_max(int arr[], int size) {
    int my_max = INT_MIN; // set to min possible integer value
    for (int i = 0; i < size; i++) {
        if (my_max < arr[i]) {
            my_max = arr[i];
        }
    }
    return my_max; // largest element
}

int array_sum(int arr[], int size) {
    int sum = 0; // initialize sum to 0
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // add each element to the sum
    }
    return sum; // return the sum of elements
}

float array_avg(int arr[], int size) {
    int sum = array_sum(arr, size); // reuse array_sum function to get sum
    return (float)sum / size; // return average as float
}
