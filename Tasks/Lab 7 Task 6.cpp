#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int min = array[0];
    int max = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("Minimum Number = %d\n", min);
    printf("Maximum Number = %d\n", max);
    
    return 0;
}
