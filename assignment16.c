#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX], even[MAX], odd[MAX];
    int n, i, e = 0, o = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid size!\n");
        return 0;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even[e++] = arr[i];
        } else {
            odd[o++] = arr[i];
        }
    }

    printf("\nEven numbers:\n");
    for (i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers:\n");
    for (i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n");

    return 0;
}
