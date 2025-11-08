#include <stdio.h>
#include <math.h>
void decimalToBinary(int num) {
    int binary[32]; 
    int i = 0;
    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }
    while (num > 0) {
        binary[i] = num % 2; 
        num = num / 2;      
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}
void binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, rem;
    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }
    printf("Decimal: %d\n", decimal);
}
int main() {
    int choice;
    int decimalNum;
    long long binaryNum;
    printf("Number System Converter\n");
    printf("1. Convert Decimal to Binary\n");
    printf("2. Convert Binary to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter a decimal number: ");
            scanf("%d", &decimalNum);
            decimalToBinary(decimalNum);
            break;
        case 2:
            printf("Enter a binary number: ");
            scanf("%lld", &binaryNum);
            binaryToDecimal(binaryNum);
            break;
        default:
            printf("Invalid choice! Please select 1 or 2.\n");
    }
    return 0;
}
