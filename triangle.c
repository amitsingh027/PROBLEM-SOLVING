//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3)
        printf("The given triangle is an equilateral triangle.\n");
    else if (side1 == side2 || side2 == side3 || side3 == side1)
        printf("The given triangle is an isosceles triangle.\n");
    else
        printf("The given triangle is a scalene triangle.\n");

    return 0;
}

