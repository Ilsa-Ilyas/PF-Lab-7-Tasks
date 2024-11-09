#include <stdio.h>
int main() {
    int arr[12];
    int pair_sum[6];
    int i;
    printf("Enter 12 numbers: ");
    for (i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Input array : {");
    for (i = 0; i < 12; i++) {
        printf("%d", arr[i]);
        if (i < 11) {
            printf(", ");
        }
    }
    printf("}\n");
    for (i = 0; i < 6; i++) {
        pair_sum[i] = arr[2 * i] + arr[2 * i + 1];
    }
    printf("Pair Sum array : {");
    for (i = 0; i < 6; i++) {
        printf("%d", pair_sum[i]);
        if (i < 5) {
            printf(", ");
        }
    }
    printf("}\n");
    return 0;
}
