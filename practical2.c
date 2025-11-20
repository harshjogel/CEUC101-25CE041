#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter length of the park: ");
    scanf("%f", &length);
    printf("Enter breadth of the park: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the park = %.2f sq. meters\n", area);
    printf("Perimeter of the park = %.2f meters\n", perimeter);

    return 0;
}
