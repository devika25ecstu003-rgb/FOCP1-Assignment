#include <stdio.h>
int main() {
    int arr[100], n, i, pos, element;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Where to insert?\n1. Front\n2. Middle\n3. End\nChoose 1/2/3: ");
    scanf("%d", &pos);
    int index;
    if (pos == 1) {
        index = 0; 
    } else if (pos == 2) {
        index = n / 2; 
    } else {
        index = n; 
    }
    for (i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
