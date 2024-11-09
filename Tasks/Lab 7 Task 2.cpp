#include <stdio.h>
int main() {
    int arr[10];
    int temp, i;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Before : {");
    for (i = 0; i < 10; i++) {
        printf("%d", arr[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("}\n");
    temp = arr[0];
    for (i = 0; i < 9; i++) {
        arr[i] = arr[i + 1];
    }
    arr[9] = temp;
    printf("After : {");
    for (i = 0; i < 10; i++) {
        printf("%d", arr[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("}\n");
    return 0;
}