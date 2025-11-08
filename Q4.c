#include <stdio.h>
void swap_temp(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (using temp): a = %d, b = %d\n", a, b);
}
void swap_arithmetic(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (using arithmetic): a = %d, b = %d\n", a, b);
}
void swap_xor(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping (using XOR): a = %d, b = %d\n", a, b);
}
void swap_pointer(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping (using pointers): a = %d, b = %d\n", *a, *b);
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nOriginal values: a = %d, b = %d\n", num1, num2);
    swap_temp(num1, num2);
    swap_arithmetic(num1, num2);
    swap_xor(num1, num2);
    swap_pointer(&num1, &num2);

    return 0;
}
