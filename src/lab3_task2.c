#include <stdio.h>

// Function prototypes
void swap(int *x, int *y);
void modify_value(int *x);

int main(void) {
    int a = 3, b = 7;
    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);

    modify_value(&a);
    printf("After modify_value: a=%d\n", a);

    return 0;
}

// Implement functions below
void swap(int *x, int *y) {
    int temp = *x;  // store value of x
    *x = *y;        // assign value of y to x
    *y = temp;      // assign stored value of x to y
}

void modify_value(int *x) {
    *x *= 2;  // multiply value of x by 2
}
