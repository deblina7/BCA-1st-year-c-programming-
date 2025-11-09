#include <stdio.h>

int main() {
    float celsius, fahrenheit;

//    // Input Celsius value
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

//    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2f°F\n", fahrenheit);

    // Input Fahrenheit value
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius = %.2f°C\n", celsius);

    return 0;
}

