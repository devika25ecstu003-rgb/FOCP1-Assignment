#include <stdio.h>
int main() {
    int arr[100], n, i, j;
    int foundDuplicate = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements: ");
    for (i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    printf("%d ", arr[i]);
                    foundDuplicate = 1;
                    break;
                }
            }
        }
    }
    if (!foundDuplicate) {
        printf("-1");
    }
    printf("\n");
    return 0;
}
