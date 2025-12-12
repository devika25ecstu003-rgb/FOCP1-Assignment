#include<stdio.h>
#include <math.h> 
int main() {
    int a,b,c,n = 0;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &a);
    originalNum = a;
    while (b!= 0) {
        b/= 10;
        ++n;
    }
    b=a;
    while (originalNum != 0) {
        remainder = b % 10;
        result += pow(c, n);
        b /= 10;
    }
    if ((int)result == a)
        printf("%d is an Armstrong number.\n", a);
    else
        printf("%d is not an Armstrong number.\n", a);

    return 0;
}

