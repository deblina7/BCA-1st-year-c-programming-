#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Formula for Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Display result
    printf("\nSimple Interest = %.2f\n", simpleInterest);

    return 0;
}

