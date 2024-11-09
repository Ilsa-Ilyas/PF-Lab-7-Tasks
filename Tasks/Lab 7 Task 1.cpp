#include <stdio.h>

int main() {
    int arr[] = {1, 1, 1, 1, 1, 5, 1, 1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number, found = 0;
    printf("Array: {");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}\n");
    printf("Enter integer to search: ");
    scanf("%d", &number);
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            printf("%d found at index %d\n", number, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Number not found\n");
    }
    return 0;
}
