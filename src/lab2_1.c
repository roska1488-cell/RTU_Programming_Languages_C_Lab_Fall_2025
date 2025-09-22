#include <stdio.h>

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Error: Please enter a positive integer greater than 0.\n");
    } else {
        int result = sum_to_n(n); 
        printf("The sum of all integers from 1 to %d is: %d\n", n, result);
    }

    return 0;
}
