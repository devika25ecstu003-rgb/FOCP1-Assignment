#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int peak_found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) &&  
            (i == n - 1 || arr[i] >= arr[i + 1])) { 
            printf("Peak element found: %d at position %d\n", arr[i], i + 1);
            peak_found = 1;
            break; 
        }
    }
    if (!peak_found) {
        printf("No peak element found.\n");
    }
    return 0;
}
