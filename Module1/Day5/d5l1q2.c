
#include <stdio.h>

struct Complex{
    double real;
    double imag;
};
typedef struct Complex Complex;

// Function to read a complex number from the user
void readComplex(Complex* c) {
    printf("Enter the real part: ");
    scanf("%lf", &(c->real));

    printf("Enter the imaginary part: ");
    scanf("%lf", &(c->imag));
}

// Function to write a complex number to the console
void writeComplex(Complex c) {
    if (c.imag >= 0) {
        printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
    } else {
        printf("Complex number: %.2f - %.2fi\n", c.real, -c.imag);
    }
}

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

int main() {
    Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("Enter the second complex number:\n");
    readComplex(&num2);

    printf("Performing addition...\n");
    sum = addComplex(num1, num2);
    printf("Sum: ");
    writeComplex(sum);

    printf("Performing multiplication...\n");
    product = multiplyComplex(num1, num2);
    printf("Product: ");
    writeComplex(product);

    return 0;
}
