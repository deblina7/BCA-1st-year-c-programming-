#include <stdio.h>
int main() 
{
    float length, breadth, area, perimeter;

    // Taking input from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculating area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Displaying the results
    printf("\nArea of the rectangle = %.2f", area);
    printf("\nPerimeter of the rectangle = %.2f", perimeter);

    return 0;
}
