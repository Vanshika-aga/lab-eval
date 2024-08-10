#include <stdio.h>


void print_polynomial(int coeffs[], int degree) {
    for (int i = 0; i <= degree; i++) {
        if (coeffs[i] != 0) {
            if (i > 0) printf(" + ");
            printf("%dx^%d", coeffs[i], degree - i);
        }
    }
    printf("\n");
}


void print_derivative(int coeffs[], int degree) {
    printf("Derivative: ");
    for (int i = 0; i < degree; i++) {
        if (coeffs[i] != 0) {
            if (i > 0) printf(" + ");
            printf("%dx^%d", coeffs[i] * (degree - i), degree - i - 1);
        }
    }
    if (degree == 0) {
        printf("0");
    }
    printf("\n");
}

int main() {
    int degree;


    printf("Enter the degree of the polynomial (0 to 5): ");
    scanf("%d", &degree);

    if (degree < 0 || degree > 5) {
        printf("Degree should be between 0 and 5.\n");
        return 1;
    }

    int coeffs[6] = {0}; // Array to hold coefficients for polynomial up to 5th degree

    // Input coefficients
    printf("Enter coefficients from the highest degree to the constant term:\n");
    for (int i = 0; i <= degree; i++) {
        printf("Coefficient of x^%d: ", degree - i);
        scanf("%d", &coeffs[i]);
    }

    // Print original polynomial
    printf("Polynomial: ");
    print_polynomial(coeffs, degree);

    // Print derivative polynomial
    print_derivative(coeffs, degree);

    return 0;
}

