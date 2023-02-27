#include <stdio.h>
/**/
/** description: Write a function that swaps the values of two integers.
**

int void swapIntegers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapIntegers(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
