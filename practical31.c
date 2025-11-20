#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    float *p, temp;

    printf("Enter number of items: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: No items to sort.\n");
        return 0;
    }

    p = (float*)malloc(n * sizeof(float));

    printf("Enter prices:\n");
    for (i = 0; i < n; i++)
        scanf("%f", p + i);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("Sorted Prices: ");
    for (i = 0; i < n; i++)
        printf("%.2f ", *(p + i));

    free(p);
    return 0;
}
