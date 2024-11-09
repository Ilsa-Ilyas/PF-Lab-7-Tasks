#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += array[i];
